#include "unix_private.h"

#include <winternl.h>
#include <dlfcn.h>
#include <pthread.h>
#include <stdlib.h>
#include <unordered_map>

#define WINE_VK_HOST
#include <vulkan/vulkan.h>

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static void *(*p_HmdSystemFactory)( const char *name, int *return_code );
static void *(*p_VRClientCoreFactory)( const char *name, int *return_code );

VkDevice_T *(*p_get_native_VkDevice)( VkDevice_T * );
VkInstance_T *(*p_get_native_VkInstance)( VkInstance_T * );
VkPhysicalDevice_T *(*p_get_native_VkPhysicalDevice)( VkPhysicalDevice_T * );
VkPhysicalDevice_T *(*p_get_wrapped_VkPhysicalDevice)( VkInstance_T *, VkPhysicalDevice_T * );
VkQueue_T *(*p_get_native_VkQueue)( VkQueue_T * );

static PFN_vkCreateInstance p_vkCreateInstance;
static PFN_vkDestroyInstance p_vkDestroyInstance;
static PFN_vkEnumeratePhysicalDevices p_vkEnumeratePhysicalDevices;
static PFN_vkGetPhysicalDeviceProperties p_vkGetPhysicalDeviceProperties;

static void *get_winevulkan_unixlib( HMODULE winevulkan )
{
    UINT64 unix_funcs;
    NTSTATUS status;
    Dl_info info;

    status = NtQueryVirtualMemory( GetCurrentProcess(), winevulkan, (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/,
                                   &unix_funcs, sizeof(unix_funcs), NULL );
    if (status)
    {
        WINE_ERR("NtQueryVirtualMemory status %#x.\n", (int)status);
        return NULL;
    }

    if (!dladdr( (void *)(ULONG_PTR)unix_funcs, &info ))
    {
        WINE_ERR("dladdr failed.\n");
        return NULL;
    }

    WINE_TRACE( "path %s.\n", info.dli_fname );
    return dlopen( info.dli_fname, RTLD_NOW );
}

static void *vulkan;

static BOOL load_vk_unwrappers( HMODULE winevulkan )
{
    void *unix_handle;

    if (!(unix_handle = get_winevulkan_unixlib( winevulkan )))
    {
        ERR("Unable to open winevulkan.so.\n");
        return FALSE;
    }

#define LOAD_FUNC( name )                                                        \
    if (!(p_##name = (decltype(p_##name))dlsym( unix_handle, "__wine_" #name ))) \
    {                                                                            \
        ERR( "%s not found.\n", #name );                                         \
        dlclose( unix_handle );                                                  \
        return FALSE;                                                            \
    }

    LOAD_FUNC( get_native_VkDevice )
    LOAD_FUNC( get_native_VkInstance )
    LOAD_FUNC( get_native_VkPhysicalDevice )
    LOAD_FUNC( get_wrapped_VkPhysicalDevice )
    LOAD_FUNC( get_native_VkQueue )

#undef LOAD_FUNC

    dlclose( unix_handle );
    return TRUE;
}

static BOOL load_vulkan(void)
{
    if (!(vulkan = dlopen( "libvulkan.so.1", RTLD_NOW )) &&
        !(vulkan = dlopen( "libvulkan.so", RTLD_NOW )))
    {
        ERR( "Unable to open libvulkan.so.1\n" );
        return FALSE;
    }

#define LOAD_FUNC( name )                                                       \
    if (!(p_##name = (decltype(p_##name))dlsym( vulkan, #name )))               \
    {                                                                           \
        ERR( "%s not found.\n", #name );                                        \
        dlclose( vulkan );                                                      \
        return FALSE;                                                           \
    }

    LOAD_FUNC( vkCreateInstance )
    LOAD_FUNC( vkDestroyInstance )
    LOAD_FUNC( vkEnumeratePhysicalDevices )
    LOAD_FUNC( vkGetPhysicalDeviceProperties )

#undef LOAD_FUNC

    return TRUE;
}

static void *vrclient;

static UINT asciiz_to_unicode( WCHAR *dst, const char *src )
{
    WCHAR *p = dst;
    while ((*p++ = *src++));
    return (p - dst) * sizeof(WCHAR);
}

static BOOL set_reg_value( HKEY hkey, const WCHAR *name, UINT type, const void *value, DWORD count )
{
    unsigned short name_size = name ? lstrlenW( name ) * sizeof(WCHAR) : 0;
    UNICODE_STRING nameW = { name_size, name_size, (WCHAR *)name };
    return !NtSetValueKey( hkey, &nameW, 0, type, value, count );
}

static void set_reg_ascii_dword( HKEY hkey, const char *name, DWORD value )
{
    WCHAR nameW[64], valueW[128];
    asciiz_to_unicode( nameW, name );
    set_reg_value( hkey, nameW, REG_DWORD, &value, sizeof(value) );
}

static void set_reg_ascii_str( HKEY hkey, const char *name, const char *value )
{
    size_t len = strlen( value ) + 1;
    WCHAR nameW[64], *valueW;

    if (!(valueW = (WCHAR *)malloc( len * sizeof(*valueW) ))) return;
    asciiz_to_unicode( valueW, value );
    asciiz_to_unicode( nameW, name );
    set_reg_value( hkey, nameW, REG_SZ, valueW, len * sizeof(*valueW) );
    free( valueW );
}

static int parse_extensions( const char *extensions, char ***list )
{
    uint32_t count = 0, o = 0;
    char *ptr, *str, **entry;

    *list = NULL;
    if (!(ptr = str = strdup( extensions ))) return 0;
    for (ptr = str; *ptr;) if (*ptr++ == ' ') count++;
    if (ptr != str) count++;

    *list = entry = (char **)malloc( (count + 1) * sizeof(*list) );
    for (*entry++ = ptr = str; *ptr;) if (*ptr++ == ' ') { ptr[-1] = 0; *entry++ = ptr; }
    *entry = NULL;

    return count;
}

template< typename Params >
static NTSTATUS vrclient_init_registry( Params *params, bool wow64 )
{
    VkApplicationInfo app_info =
    {
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pApplicationName = "proton_vrhelper",
        .applicationVersion = 1,
        .pEngineName = "proton_vrhelper",
        .engineVersion = 1,
        .apiVersion = VK_MAKE_VERSION(1, 1, 0),
    };
    VkInstanceCreateInfo inst_info =
    {
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pApplicationInfo = &app_info,
    };

    uint32_t error, instance_extensions_count, device_count;
    u_IVRClientCore_IVRClientCore_003 *client_core;
    u_IVRCompositor_IVRCompositor_028 *compositor;
    VkPhysicalDevice *phys_devices = NULL;
    VkPhysicalDeviceProperties prop = {};
    char *buffer = NULL, *new_buffer;
    char *xr_inst_ext, *xr_dev_ext;
    VkInstance vk_instance = NULL;
    BOOL vr_initialized = FALSE;
    char **instance_extensions;
    HMODULE hvulkan = NULL;
    DWORD vr_status = ~0u;
    unsigned int length;
    HMODULE hwineopenxr;
    void *lib_vrclient;
    void *unix_handle;
    UINT hmd_present;
    int return_code;
    unsigned int i;
    VkResult res;

    TRACE( "Starting VR info initialization.\n" );

    if (!load_vulkan()) return 0;

    if (!(client_core = (u_IVRClientCore_IVRClientCore_003 *)p_VRClientCoreFactory( "IVRClientCore_003", &return_code )))
    {
        ERR( "Could not get IVRClientCore, error %d.\n", return_code );
        goto failed;
    }

    /* Without overriding the app_key vrclient waits 2 seconds for a valid appkey before returning. */
    if ((error = client_core->Init( VRApplication_Background, NULL )))
    {
        if (error == VRInitError_Init_NoServerForBackgroundApp) TRACE( "VR server is not available.\n" );
        else ERR( "VR init failed, error %u.\n", error );
        client_core = NULL;
        goto failed;
    }

    hmd_present = !!client_core->BIsHmdPresent();
    TRACE( "hmd_present %#x.\n", hmd_present );
    set_reg_ascii_dword( params->vr_key, "is_hmd_present", hmd_present );

    if (!(compositor = (u_IVRCompositor_IVRCompositor_028 *)client_core->GetGenericInterface( "IVRCompositor_028", &error )))
    {
        ERR( "Could not get compositor, error %u.\n", error );
        goto failed;
    }

    length = compositor->GetVulkanInstanceExtensionsRequired( nullptr, 0 );
    if (!(buffer = (char *)malloc( length ))) goto failed;
    *buffer = 0;
    compositor->GetVulkanInstanceExtensionsRequired( buffer, length );
    TRACE( "Instance extensions %s.\n", buffer );
    set_reg_ascii_str( params->vr_key, "openvr_vulkan_instance_extensions", buffer );

    inst_info.enabledExtensionCount = parse_extensions( buffer, &instance_extensions );
    inst_info.ppEnabledExtensionNames = instance_extensions;
    res = p_vkCreateInstance( &inst_info, NULL, &vk_instance );
    if (instance_extensions) free( instance_extensions[0] );
    free( instance_extensions );
    free( buffer );

    if (res != VK_SUCCESS)
    {
        ERR( "Could not create VK instance, res %d.\n", res );
        goto failed;
    }

    if ((res = p_vkEnumeratePhysicalDevices( vk_instance, &device_count, NULL )) != VK_SUCCESS)
    {
        ERR( "Could not enumerate physical devices, res %d.\n", res );
        goto failed;
    }
    if (!(phys_devices = (VkPhysicalDevice *)malloc( device_count * sizeof(*phys_devices) ))) goto failed;
    if ((res = p_vkEnumeratePhysicalDevices( vk_instance, &device_count, phys_devices )) != VK_SUCCESS)
    {
        ERR( "Could not enumerate physical devices, res %d.\n", res );
        goto failed;
    }

    for (i = 0; i < device_count; ++i)
    {
        char name[256], *buffer;

        p_vkGetPhysicalDeviceProperties( phys_devices[i], &prop );
        if (prop.apiVersion < VK_MAKE_VERSION( 1, 1, 0 ))
        {
            TRACE( "Skipping Vulkan 1.0 adapter %s.\n", prop.deviceName );
            continue;
        }

        length = compositor->GetVulkanDeviceExtensionsRequired( phys_devices[i], nullptr, 0 );
        if (!(buffer = (char *)malloc( length ))) goto failed;
        *buffer = 0;
        compositor->GetVulkanDeviceExtensionsRequired( phys_devices[i], buffer, length );

        sprintf( name, "PCIID:%04x:%04x", prop.vendorID, prop.deviceID );
        TRACE( "%s: %s.\n", name, buffer );
        set_reg_ascii_str( params->vr_key, name, buffer );

        free( buffer );
    }

    free( phys_devices );
    p_vkDestroyInstance( vk_instance, NULL );

    client_core->Cleanup();
    params->_ret = true;
    dlclose( vulkan );
    vulkan = NULL;
    return 0;

failed:
    free( phys_devices );
    if (vk_instance) p_vkDestroyInstance( vk_instance, NULL );
    if (client_core) client_core->Cleanup();
    dlclose( vulkan );
    vulkan = NULL;
    return 0;
}

template< typename Params >
static NTSTATUS vrclient_init( Params *params, bool wow64 )
{

    params->_ret = false;

    if (vrclient)
    {
        params->_ret = true;
        return 0;
    }

    if (!(vrclient = dlopen( params->unix_path, RTLD_NOW )))
    {
        TRACE( "unable to load %s\n", (const char *)params->unix_path );
        return 0;
    }

#define LOAD_FUNC( x )                                      \
    if (!(p_##x = (decltype(p_##x))dlsym( vrclient, #x )))  \
    {                                                       \
        ERR( "unable to load " #x "\n" );                   \
        return 0;                                          \
    }

    LOAD_FUNC( HmdSystemFactory );
    LOAD_FUNC( VRClientCoreFactory );

#undef LOAD_FUNC

    if (!load_vk_unwrappers( params->winevulkan )) return 0;

    params->_ret = true;
    return 0;
}

template< typename Params >
static NTSTATUS vrclient_unload( Params *params, bool wow64 )
{
    if (vrclient) dlclose( vrclient );
    vrclient = NULL;
    p_HmdSystemFactory = NULL;
    p_VRClientCoreFactory = NULL;
    return 0;
}

template< typename Params >
static NTSTATUS vrclient_HmdSystemFactory( Params *params, bool wow64 )
{
    params->_ret = p_HmdSystemFactory( params->name, params->return_code );
    return 0;
}

template< typename Params >
static NTSTATUS vrclient_VRClientCoreFactory( Params *params, bool wow64 )
{
    params->_ret = p_VRClientCoreFactory( params->name, params->return_code );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRTrackedCamera_GetVideoStreamFrame( Iface *iface, Params *params, bool wow64 )
{
    using w_camera_type = std::remove_const_t< std::remove_reference_t< decltype(*params->_ret) > >;
    u_CameraVideoStreamFrame_t_0914 camera = *iface->GetVideoStreamFrame( params->nDeviceIndex );
    *(w_camera_type *)(&*params->_ret) = camera;
    return 0;
}

namespace std
{
template<> struct hash< struct u_buffer >
{
    using argument_type = struct u_buffer;
    using result_type = std::size_t;
    result_type operator()( argument_type const& buf ) const { return buf.ptr; }
};
}

static pthread_mutex_t buffer_cache_lock = PTHREAD_MUTEX_INITIALIZER;
static std::unordered_map< struct u_buffer, void * > buffer_cache;

template< typename Params >
static NTSTATUS vrclient_get_unix_buffer( Params *params, bool wow64 )
{
    struct cache_entry *entry;
    struct rb_entry *ptr;

    pthread_mutex_lock( &buffer_cache_lock );
    auto iter = buffer_cache.find( params->buf );
    if (iter != buffer_cache.end()) params->ptr = iter->second;
    else
    {
        memcpy( params->ptr, (char *)params->buf, params->buf.len );
        buffer_cache[params->buf] = params->ptr;
    }
    pthread_mutex_unlock( &buffer_cache_lock );

    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
#define VRCLIENT_UNIX_WOW64_FUNC( name ) \
    NTSTATUS wow64_ ## name( void *args ) { return name( (struct wow64_ ## name ## _params *)args, true ); }
#else /* defined(__x86_64__) || defined(__aarch64__) */
#define VRCLIENT_UNIX_WOW64_FUNC( name )
#endif /* defined(__x86_64__) || defined(__aarch64__) */

#define VRCLIENT_UNIX_FUNC( name ) \
    NTSTATUS name( void *args ) { return name( (struct name ## _params *)args, false ); } \
    VRCLIENT_UNIX_WOW64_FUNC( name )

VRCLIENT_UNIX_FUNC( vrclient_init );
VRCLIENT_UNIX_FUNC( vrclient_init_registry );
VRCLIENT_UNIX_FUNC( vrclient_unload );
VRCLIENT_UNIX_FUNC( vrclient_HmdSystemFactory );
VRCLIENT_UNIX_FUNC( vrclient_VRClientCoreFactory );
VRCLIENT_UNIX_FUNC( vrclient_get_unix_buffer );

VRCLIENT_UNIX_IMPL( IVRTrackedCamera, 001, GetVideoStreamFrame );
