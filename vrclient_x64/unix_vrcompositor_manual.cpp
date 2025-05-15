#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static const w_VRTextureWithPose_t *get_texture_with_pose( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithPose_t *)w_texture;
}
static const w_VRTextureWithDepth_t *get_texture_with_depth( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithDepth_t *)w_texture;
}
static const w_VRTextureWithPoseAndDepth_t *get_texture_with_pose_and_depth( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithPoseAndDepth_t *)w_texture;
}

static w_VRVulkanTextureData_t *get_vulkan_texture_data( const w_Texture_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->handle;
}
static w_VRVulkanTextureArrayData_t *get_vulkan_texture_data_array( const w_Texture_t *w_texture )
{
    return (w_VRVulkanTextureArrayData_t *)w_texture->handle;
}
static w_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w_VRTextureWithDepth_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->depth.handle;
}
static w_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w_VRTextureWithPoseAndDepth_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->depth.handle;
}

#if defined(__x86_64__) || defined(__aarch64__)
static const w32_VRTextureWithPose_t *get_texture_with_pose( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithPose_t *)w_texture;
}
static const w32_VRTextureWithDepth_t *get_texture_with_depth( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithDepth_t *)w_texture;
}
static const w32_VRTextureWithPoseAndDepth_t *get_texture_with_pose_and_depth( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithPoseAndDepth_t *)w_texture;
}

static w32_VRVulkanTextureData_t *get_vulkan_texture_data( const w32_Texture_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->handle;
}
static w32_VRVulkanTextureArrayData_t *get_vulkan_texture_data_array( const w32_Texture_t *w_texture )
{
    return (w32_VRVulkanTextureArrayData_t *)(void *)w_texture->handle;
}
static w32_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w32_VRTextureWithDepth_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->depth.handle;
}
static w32_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w32_VRTextureWithPoseAndDepth_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->depth.handle;
}
#endif /* defined(__x86_64__) || defined(__aarch64__) */

template< typename WVulkanTextureData >
static u_VRVulkanTextureData_t *unwrap_texture_vkdata( const WVulkanTextureData *w_vkdata, u_VRVulkanTextureData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

template< typename WVulkanTextureArrayData >
static u_VRVulkanTextureArrayData_t *unwrap_texture_vkdata_array( const WVulkanTextureArrayData *w_vkdata, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

template< typename WTexture >
static void *unwrap_vulkan_texture_data( const WTexture *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    if (flags & Submit_VulkanTextureWithArrayData) return unwrap_texture_vkdata_array( get_vulkan_texture_data_array( w_texture ), u_vkdata );
    else return unwrap_texture_vkdata( get_vulkan_texture_data( w_texture ), (u_VRVulkanTextureData_t *)u_vkdata );
}

template< typename WTexture >
static u_Texture_t *unwrap_submit_texture_data( const WTexture *w_texture, uint32_t flags, u_VRTextureWithPoseAndDepth_t *u_texture,
                                                u_VRVulkanTextureArrayData_t *u_vkdata, u_VRVulkanTextureData_t *u_depth_vkdata )
{
    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    default:
        *(u_Texture_t *)u_texture = *w_texture;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        break;
    case Submit_TextureWithPose:
    {
        auto u_texture_with_pose = (u_VRTextureWithPose_t *)u_texture;
        auto w_texture_with_pose = get_texture_with_pose( w_texture );
        *u_texture_with_pose = *w_texture_with_pose;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        break;
    }
    case Submit_TextureWithDepth:
    {
        auto u_texture_with_depth = (u_VRTextureWithDepth_t *)u_texture;
        auto w_texture_with_depth = get_texture_with_depth( w_texture );
        auto w_depth_data = get_vulkan_texture_depth_data( w_texture_with_depth );
        *u_texture_with_depth = *w_texture_with_depth;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        /* We should maybe unwrap the vkdata but No Man Sky uses a garbage handle in its w_VRTextureDepthInfo_t, is this really used? */
        u_texture_with_depth->depth.handle = w_depth_data;
        break;
    }
    case Submit_TextureWithPose | Submit_TextureWithDepth:
    {
        auto u_texture_with_pose_and_depth = (u_VRTextureWithPoseAndDepth_t *)u_texture;
        auto w_texture_with_pose_and_depth = get_texture_with_pose_and_depth( w_texture );
        auto w_depth_data = get_vulkan_texture_depth_data( w_texture_with_pose_and_depth );
        *u_texture_with_pose_and_depth = *w_texture_with_pose_and_depth;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        u_texture_with_pose_and_depth->depth.handle = unwrap_texture_vkdata( w_depth_data, u_depth_vkdata );
        break;
    }
    }

    return (u_Texture_t *)u_texture;
}

template< typename WTexture >
static void unwrap_texture( u_Texture_t *u_texture, const WTexture *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    *u_texture = *w_texture;
    if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
}

#if defined(__x86_64__) || defined(__aarch64__)
static u_Texture_t *unwrap_submit_texture_data( const ptr32< const w32_Texture_t *> ptr, uint32_t flags, u_VRTextureWithPoseAndDepth_t *u_texture,
                                                u_VRVulkanTextureArrayData_t *u_vkdata, u_VRVulkanTextureData_t *u_depth_vkdata )
{
    const w32_Texture_t *w_texture = ptr;
    return unwrap_submit_texture_data( w_texture, flags, u_texture, u_vkdata, u_depth_vkdata );
}
#endif /* defined(__x86_64__) || defined(__aarch64__) */

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_GetVulkanDeviceExtensionsRequired( Iface *iface, Params *params, bool wow64 )
{
    static const struct
    {
        const char *unix_ext;
        const char *win_ext;
    }
    exts[] =
    {
        { "VK_KHR_external_memory_fd", "VK_KHR_external_memory_win32" },
        { "VK_KHR_external_semaphore_fd", "VK_KHR_external_semaphore_win32" },
    };
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    char buffer[2048], *p, *end, *next;
    uint32_t i, len;

    len = iface->GetVulkanDeviceExtensionsRequired( host_device, buffer, sizeof(buffer) );
    if (!len || len > sizeof(buffer))
    {
        ERR( "len %u.\n", len );
        params->_ret = 0;
        return 0;
    }

    p = buffer;
    end = p + strlen(p);
    while (1)
    {
        while (isspace(*p)) ++p;
        if (!*p) break;
        next = p + 1;
        while (*next && !isspace(*next)) ++next;
        for (i = 0; i < ARRAY_SIZE(exts); ++i)
        {
            len = strlen( exts[i].unix_ext );
            if (len == next - p && !memcmp( p, exts[i].unix_ext, len ))
            {
                len = strlen( exts[i].win_ext );
                if (end - next + 1 + len + (p - buffer) > sizeof(buffer))
                {
                    ERR( "buffer overflow.\n" );
                    params->_ret = 0;
                    return 0;
                }
                memmove( p + len, next, end - next + 1 );
                memcpy( p, exts[i].win_ext, len );
                end = p + len + (end - next);
                next = p + len;
                break;
            }
        }
        p = next;
    }
    params->_ret = end - buffer + 1;
    if (params->pchValue && params->unBufferSize >= params->_ret)
        memcpy( params->pchValue, buffer, params->_ret );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_SetSkyboxOverride( Iface *iface, Params *params, bool wow64 )
{
    u_VRVulkanTextureArrayData_t *vkdata = new u_VRVulkanTextureArrayData_t[params->unTextureCount];
    u_Texture_t *textures = new u_Texture_t[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) unwrap_texture( textures + i, params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );

    delete[] textures;
    delete[] vkdata;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_Submit( Iface *iface, Params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_SubmitWithArrayIndex( Iface *iface, Params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->SubmitWithArrayIndex( params->eEye, submit, params->unTextureArrayIndex, params->pBounds, params->nSubmitFlags );
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRCompositor, 009, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 009, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 010, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 010, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 011, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 011, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 012, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 012, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 013, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 013, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 014, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 014, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 015, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 015, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 016, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 016, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 017, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 017, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 018, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 018, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, SubmitWithArrayIndex );
