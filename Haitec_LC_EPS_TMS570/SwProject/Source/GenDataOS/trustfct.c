/* file: trustfct.c, automatically generated by genTMS570SafeCtxAS.exe, Version: 5.06 */
/* configuration read from: C:\Users\nzx5jd\AppData\Local\Temp\~cfg4_314_EPS.ecuc.arxml.oil */
/* generation at  : Wed Sep 09 14:34:00 2015 */
/* Unlimited license CBD1010124 for Nexteer Automotive */
/* Implementation: TMS570LS3x */
/* Version of general code: 5.23c */

#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif
#define osdVrmGenMajRelNum 5
#define osdVrmGenMinRelNum 6
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

#if defined USE_QUOTE_INCLUDES
 #include "Os.h"
#else
 #include <Os.h>
#endif

#pragma SET_DATA_SECTION(".osconst")

#pragma SET_CODE_SECTION(".oscode")

osqROM0 osqROM1 const osqROM2 TrustedFunctionType osqROM3 oskTrustedFctTab[osdNumberOfTrustedFunctions]=
{
   TRUSTED_TWrapS_XcpWriteAp0,
   TRUSTED_TWrapS_CallFblStart,
   TRUSTED_TWrapS_Adc_Init,
   TRUSTED_TWrapS_Adc2_Init1,
   TRUSTED_TWrapS_PwmCdd_Init,
   TRUSTED_TWrapS_StaMd_Init0,
   TRUSTED_TWrapS_Wdg_TMS570LS3x_Init,
   TRUSTED_TWrapS_WdgM_Init,
   TRUSTED_TWrapS_NvMProxy_Init,
   TRUSTED_TWrapS_FeeIf_Init,
   TRUSTED_TWrapS_Fee_MainFunction,
   TRUSTED_TWrapS_Fee_Read,
   TRUSTED_TWrapS_Fee_Write,
   TRUSTED_TWrapS_Fee_EraseImmediateBlock,
   TRUSTED_TWrapS_Fee_InvalidateBlock,
   TRUSTED_TWrapS_Fee_Cancel,
   TRUSTED_TWrapS_Fee_GetStatus,
   TRUSTED_TWrapS_Fee_GetJobResult,
   TRUSTED_TWrapS_uDiagVIM_RednRpdShtdn,
   TRUSTED_TWrapS_uDiagECC_RednRpdShtdn,
   TRUSTED_TWrapS_Dma_InvalidateSlowADCGroup,
   TRUSTED_TWrapS_ProcessF0FF,
   TRUSTED_TWrapS_TI_Fee_SuspendResumeErase,
};

#ifndef OS_SUPPRESS_CALLEESTUB
#endif /* OS_SUPPRESS_CALLEESTUB */
osqROM0 osqROM1 const osqROM2 NonTrustedFunctionType osqROM3 oskNonTrustedFctTab[osdNumberOfNonTrustedFunctions]=
{
   NONTRUSTED_NtWrapS_XcpWriteAp8,
   NONTRUSTED_NtWrapS_XcpWriteAp9,
   NONTRUSTED_NtWrapS_XcpWriteAp10,
   NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustClrTrim,
   NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustSetTrim,
   NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtClearTrim,
   NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtSetTrim,
   NONTRUSTED_NtWrapS_AstLmt_Scom_ManualTrqCmd,
   NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalGain,
   NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalOffset,
   NONTRUSTED_NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals,
   NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim,
   NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim,
   NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_WriteData,
   NONTRUSTED_NtWrapS_HaitecTrqCmd_SCom_StartCtrl,
   NONTRUSTED_NtWrapS_HaitecTrqCmd_SCom_StopCtrl,
   NONTRUSTED_NtWrapS_Polarity_SCom_SetPolarity,
   NONTRUSTED_NtWrapS_SCom_EOLNomMtrParam_Set,
   NONTRUSTED_NtWrapS_TrqCanc_Scom_SetCogTrqCal,
   NONTRUSTED_NtWrapS_TrqCmdScl_SCom_Set,
   NONTRUSTED_NtWrapS_VehDyn_SCom_ResetCenter,
};

osqROM0 osqROM1 const osqROM2 ApplicationType osqROM3 oskNTFToAppl[osdNumberOfNonTrustedFunctions]=
{
   Ap_8,
   Ap_9,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
   Ap_10,
};

#pragma SET_DATA_SECTION()

#pragma SET_CODE_SECTION()


/* END OF C:\SynergyProjects\Haitec_LC_EPS_TMS570-nzx5jd\Haitec_LC_EPS_TMS570\Tools\AsrProject\..\..\SwProject\Source\GenData\\..\GenDataOS\trustfct.c */

