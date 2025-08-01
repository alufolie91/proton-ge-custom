/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVROverlay_IVROverlay_028_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_FindOverlay_params *params = (struct IVROverlay_IVROverlay_028_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_FindOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_FindOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_028_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_CreateOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_CreateOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_CreateSubviewOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_CreateSubviewOverlay_params *params = (struct IVROverlay_IVROverlay_028_CreateSubviewOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateSubviewOverlay( params->parentOverlayHandle, params->pchSubviewOverlayKey, params->pchSubviewOverlayName, params->pSubviewOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_CreateSubviewOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_CreateSubviewOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_CreateSubviewOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateSubviewOverlay( params->parentOverlayHandle, params->pchSubviewOverlayKey, params->pchSubviewOverlayName, params->pSubviewOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_028_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_DestroyOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_DestroyOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayKey( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayKey_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayName( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayName_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayName_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayName( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayName_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayImageData( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayImageData_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayRenderingPid( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayRenderingPid_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayRenderingPid( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayRenderingPid_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayRenderingPid( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayRenderingPid_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayRenderingPid_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayFlags( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayFlags_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayFlags( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayFlags_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayFlags_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTexelAspect( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTexelAspect_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTexelAspect( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTexelAspect_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTexelAspect( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTexelAspect_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTexelAspect_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_028_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlaySortOrder( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlaySortOrder_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlaySortOrder( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlaySortOrder_params *params = (struct IVROverlay_IVROverlay_028_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlaySortOrder( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlaySortOrder_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlaySortOrder_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayCurvature( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayCurvature_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayCurvature( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayCurvature_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayCurvature( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayCurvature_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayCurvature_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayPreCurvePitch( params->ulOverlayHandle, params->fRadians );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayPreCurvePitch( params->ulOverlayHandle, params->fRadians );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayPreCurvePitch( params->ulOverlayHandle, params->pfRadians );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayPreCurvePitch_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayPreCurvePitch( params->ulOverlayHandle, params->pfRadians );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureColorSpace_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTransformType( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformType_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformTrackedDeviceComponent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTransformCursor( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTransformCursor_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTransformCursor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformCursor_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformCursor( params->ulCursorOverlayHandle, params->pvHotspot );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTransformCursor( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTransformCursor_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTransformCursor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformCursor_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTransformCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformCursor( params->ulOverlayHandle, params->pvHotspot );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayTransformProjection( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayTransformProjection_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayTransformProjection_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayTransformProjection( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformProjection_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayTransformProjection_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformProjection( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform, params->pProjection, params->eEye );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetSubviewPosition( void *args )
{
    struct IVROverlay_IVROverlay_028_SetSubviewPosition_params *params = (struct IVROverlay_IVROverlay_028_SetSubviewPosition_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetSubviewPosition( params->ulOverlayHandle, params->fX, params->fY );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetSubviewPosition( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetSubviewPosition_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetSubviewPosition_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetSubviewPosition( params->ulOverlayHandle, params->fX, params->fY );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_028_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ShowOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ShowOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_HideOverlay_params *params = (struct IVROverlay_IVROverlay_028_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_HideOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_HideOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_028_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_028_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_IsOverlayVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_IsOverlayVisible_params *params = (struct wow64_IVROverlay_IVROverlay_028_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates( void *args )
{
    struct IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates_params *params = (struct IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetTransformForOverlayCoordinates_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_WaitFrameSync( void *args )
{
    struct IVROverlay_IVROverlay_028_WaitFrameSync_params *params = (struct IVROverlay_IVROverlay_028_WaitFrameSync_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->WaitFrameSync( params->nTimeoutMs );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_WaitFrameSync( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_WaitFrameSync_params *params = (struct wow64_IVROverlay_IVROverlay_028_WaitFrameSync_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->WaitFrameSync( params->nTimeoutMs );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_028_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_028_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_PollNextOverlayEvent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_PollNextOverlayEvent_params *params = (struct wow64_IVROverlay_IVROverlay_028_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_028_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_028_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ComputeOverlayIntersection( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ComputeOverlayIntersection_params *params = (struct wow64_IVROverlay_IVROverlay_028_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_028_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_IsHoverTargetOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_IsHoverTargetOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayIntersectionMask( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayIntersectionMask_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayIntersectionMask( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayIntersectionMask_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayIntersectionMask_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration( void *args )
{
    struct IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration_params *params = (struct IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration_params *params = (struct wow64_IVROverlay_IVROverlay_028_TriggerLaserMouseHapticVibration_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->TriggerLaserMouseHapticVibration( params->ulOverlayHandle, params->fDurationSeconds, params->fFrequency, params->fAmplitude );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayCursor( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayCursor_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayCursor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayCursor_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayCursor_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCursor( params->ulOverlayHandle, params->ulCursorHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayCursorPositionOverride( params->ulOverlayHandle, params->pvCursor );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride( void *args )
{
    struct IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride_params *params = (struct IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride_params *params = (struct wow64_IVROverlay_IVROverlay_028_ClearOverlayCursorPositionOverride_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ClearOverlayCursorPositionOverride( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_028_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_028_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ClearOverlayTexture( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ClearOverlayTexture_params *params = (struct wow64_IVROverlay_IVROverlay_028_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayRaw( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayRaw_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unBytesPerPixel );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_028_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_028_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetOverlayFromFile( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetOverlayFromFile_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTexture( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTexture_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    void *u_pNativeTextureHandle;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle ? &u_pNativeTextureHandle : nullptr, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
    if (params->pNativeTextureHandle) *params->pNativeTextureHandle = u_pNativeTextureHandle;
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle( void *args )
{
    struct IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle_params *params = (struct IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle_params *params = (struct wow64_IVROverlay_IVROverlay_028_ReleaseNativeOverlayHandle_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetOverlayTextureSize( void *args )
{
    struct IVROverlay_IVROverlay_028_GetOverlayTextureSize_params *params = (struct IVROverlay_IVROverlay_028_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetOverlayTextureSize( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureSize_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetOverlayTextureSize_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_028_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_CreateDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_CreateDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_028_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_028_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_IsDashboardVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_IsDashboardVisible_params *params = (struct wow64_IVROverlay_IVROverlay_028_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_028_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_IsActiveDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_IsActiveDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_028_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_028_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ShowDashboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ShowDashboard_params *params = (struct wow64_IVROverlay_IVROverlay_028_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice( void *args )
{
    struct IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice_params *params = (struct IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetPrimaryDashboardDevice_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_028_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_028_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ShowKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ShowKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_028_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_028_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ShowKeyboardForOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ShowKeyboardForOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->unFlags, params->pchDescription, params->unCharMax, params->pchExistingText, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_028_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_028_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_GetKeyboardText( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_GetKeyboardText_params *params = (struct wow64_IVROverlay_IVROverlay_028_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_028_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_028_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_HideKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_HideKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_028_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetKeyboardTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay_params *params = (struct IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_SetKeyboardPositionForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_ShowMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_ShowMessageOverlay_params *params = (struct IVROverlay_IVROverlay_028_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_ShowMessageOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_ShowMessageOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_ShowMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_028_CloseMessageOverlay( void *args )
{
    struct IVROverlay_IVROverlay_028_CloseMessageOverlay_params *params = (struct IVROverlay_IVROverlay_028_CloseMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->CloseMessageOverlay(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_028_CloseMessageOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_028_CloseMessageOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_028_CloseMessageOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_028 *iface = (struct u_IVROverlay_IVROverlay_028 *)params->u_iface;
    iface->CloseMessageOverlay(  );
    return 0;
}
#endif

