/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *     Workspace:  C:/SynergyWorkspace/WorkingProjects/AstLmt_CM-gzkys7/AstLmt_CM/autosar
 *     SW-C Type:  Ap_AstLmt
 *  Generated at:  Mon Aug 25 22:45:37 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_Float
typedef float32 Float;
# define Float_LowerLimit ((Float)-FLT_MAX)
# define Float_UpperLimit ((Float)FLT_MAX)

# define Rte_TypeDef_UInt8
typedef uint8 UInt8;
# define UInt8_LowerLimit ((UInt8)0u)
# define UInt8_UpperLimit ((UInt8)255u)

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;
# define NvM_RequestResultType_LowerLimit ((NvM_RequestResultType)0u)
# define NvM_RequestResultType_UpperLimit ((NvM_RequestResultType)5u)
# if (defined RTE_CONST_NVM_REQ_OK) || (defined NVM_REQ_OK)
#  if (!defined RTE_CONST_NVM_REQ_OK) || (RTE_CONST_NVM_REQ_OK != 0u)
#   error "Enumeration constant <NVM_REQ_OK> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_OK (0u)
#  define NVM_REQ_OK ((NvM_RequestResultType)0u)
# endif
# if (defined RTE_CONST_NVM_REQ_NOT_OK) || (defined NVM_REQ_NOT_OK)
#  if (!defined RTE_CONST_NVM_REQ_NOT_OK) || (RTE_CONST_NVM_REQ_NOT_OK != 1u)
#   error "Enumeration constant <NVM_REQ_NOT_OK> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_NOT_OK (1u)
#  define NVM_REQ_NOT_OK ((NvM_RequestResultType)1u)
# endif
# if (defined RTE_CONST_NVM_REQ_PENDING) || (defined NVM_REQ_PENDING)
#  if (!defined RTE_CONST_NVM_REQ_PENDING) || (RTE_CONST_NVM_REQ_PENDING != 2u)
#   error "Enumeration constant <NVM_REQ_PENDING> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_PENDING (2u)
#  define NVM_REQ_PENDING ((NvM_RequestResultType)2u)
# endif
# if (defined RTE_CONST_NVM_REQ_INTEGRITY_FAILED) || (defined NVM_REQ_INTEGRITY_FAILED)
#  if (!defined RTE_CONST_NVM_REQ_INTEGRITY_FAILED) || (RTE_CONST_NVM_REQ_INTEGRITY_FAILED != 3u)
#   error "Enumeration constant <NVM_REQ_INTEGRITY_FAILED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_INTEGRITY_FAILED (3u)
#  define NVM_REQ_INTEGRITY_FAILED ((NvM_RequestResultType)3u)
# endif
# if (defined RTE_CONST_NVM_REQ_BLOCK_SKIPPED) || (defined NVM_REQ_BLOCK_SKIPPED)
#  if (!defined RTE_CONST_NVM_REQ_BLOCK_SKIPPED) || (RTE_CONST_NVM_REQ_BLOCK_SKIPPED != 4u)
#   error "Enumeration constant <NVM_REQ_BLOCK_SKIPPED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_BLOCK_SKIPPED (4u)
#  define NVM_REQ_BLOCK_SKIPPED ((NvM_RequestResultType)4u)
# endif
# if (defined RTE_CONST_NVM_REQ_NV_INVALIDATED) || (defined NVM_REQ_NV_INVALIDATED)
#  if (!defined RTE_CONST_NVM_REQ_NV_INVALIDATED) || (RTE_CONST_NVM_REQ_NV_INVALIDATED != 5u)
#   error "Enumeration constant <NVM_REQ_NV_INVALIDATED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NVM_REQ_NV_INVALIDATED (5u)
#  define NVM_REQ_NV_INVALIDATED ((NvM_RequestResultType)5u)
# endif

# define Rte_TypeDef_NvM_DestPtr
typedef UInt8 NvM_DestPtr[65535];


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Double
typedef float64 Double;
#  define Double_LowerLimit ((Double)-DBL_MAX)
#  define Double_UpperLimit ((Double)DBL_MAX)

#  define Rte_TypeDef_SInt16
typedef sint16 SInt16;
#  define SInt16_LowerLimit ((SInt16)-32768)
#  define SInt16_UpperLimit ((SInt16)32767)

#  define Rte_TypeDef_SInt32
typedef sint32 SInt32;
#  define SInt32_LowerLimit ((SInt32)-2147483648)
#  define SInt32_UpperLimit ((SInt32)2147483647)

#  define Rte_TypeDef_SInt4
typedef sint8 SInt4;
#  define SInt4_LowerLimit ((SInt4)-8)
#  define SInt4_UpperLimit ((SInt4)7)

#  define Rte_TypeDef_SInt8
typedef sint8 SInt8;
#  define SInt8_LowerLimit ((SInt8)-128)
#  define SInt8_UpperLimit ((SInt8)127)

#  define Rte_TypeDef_UInt16
typedef uint16 UInt16;
#  define UInt16_LowerLimit ((UInt16)0u)
#  define UInt16_UpperLimit ((UInt16)65535u)

#  define Rte_TypeDef_UInt32
typedef uint32 UInt32;
#  define UInt32_LowerLimit ((UInt32)0u)
#  define UInt32_UpperLimit ((UInt32)4294967295u)

#  define Rte_TypeDef_UInt4
typedef uint8 UInt4;
#  define UInt4_LowerLimit ((UInt4)0u)
#  define UInt4_UpperLimit ((UInt4)15u)

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# if (defined RTE_CONST_D_FALSE_CNT_LGC) || (defined D_FALSE_CNT_LGC)
#  if (!defined RTE_CONST_D_FALSE_CNT_LGC) || (RTE_CONST_D_FALSE_CNT_LGC != FALSE)
#   error "Constant value <D_FALSE_CNT_LGC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_FALSE_CNT_LGC (FALSE)
#  define D_FALSE_CNT_LGC ((Boolean)FALSE)
# endif

# if (defined RTE_CONST_D_MTRTRQCMDHILMT_MTRNM_F32) || (defined D_MTRTRQCMDHILMT_MTRNM_F32)
#  if (!defined RTE_CONST_D_MTRTRQCMDHILMT_MTRNM_F32) || (RTE_CONST_D_MTRTRQCMDHILMT_MTRNM_F32 != 8.8)
#   error "Constant value <D_MTRTRQCMDHILMT_MTRNM_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_MTRTRQCMDHILMT_MTRNM_F32 (8.8)
#  define D_MTRTRQCMDHILMT_MTRNM_F32 ((Float)8.8)
# endif

# if (defined RTE_CONST_D_MTRTRQCMDLOLMT_MTRNM_F32) || (defined D_MTRTRQCMDLOLMT_MTRNM_F32)
#  if (!defined RTE_CONST_D_MTRTRQCMDLOLMT_MTRNM_F32) || (RTE_CONST_D_MTRTRQCMDLOLMT_MTRNM_F32 != -8.8)
#   error "Constant value <D_MTRTRQCMDLOLMT_MTRNM_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_MTRTRQCMDLOLMT_MTRNM_F32 (-8.8)
#  define D_MTRTRQCMDLOLMT_MTRNM_F32 ((Float)-8.8)
# endif

# if (defined RTE_CONST_D_ONE_ULS_F32) || (defined D_ONE_ULS_F32)
#  if (!defined RTE_CONST_D_ONE_ULS_F32) || (RTE_CONST_D_ONE_ULS_F32 != 1)
#   error "Constant value <D_ONE_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ONE_ULS_F32 (1)
#  define D_ONE_ULS_F32 ((Float)1)
# endif

# if (defined RTE_CONST_D_ZERO_ULS_F32) || (defined D_ZERO_ULS_F32)
#  if (!defined RTE_CONST_D_ZERO_ULS_F32) || (RTE_CONST_D_ZERO_ULS_F32 != 0)
#   error "Constant value <D_ZERO_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_ULS_F32 (0)
#  define D_ZERO_ULS_F32 ((Float)0)
# endif



/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  Float value;
} Rte_DE_Float;

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ap_AstLmt
{
  /* Data Handles section */
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistEOTDamping_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistEOTGain_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistEOTLimit_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistStallLimit_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_AssistVehSpdLimit_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_CombinedDamping_MtrNm_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_DefeatLimitService_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_LimitPercentFiltered_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_LimitedReturn_MtrNm_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_LrnPnCtrCCDisable_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_LrnPnCtrEnable_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_LrnPnCtrTCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_OpTrqOvr_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_OutputRampMult_Uls_f32;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PosServCCDisable_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PowerLimitPerc_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PreLimitForStall_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PreLimitTorque_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PrkAssistCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_PullCompCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_SumLimTrqCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_TSMitCommand_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_ThermalLimitPerc_Uls_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_ThermalLimit_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_TrqLimitMin_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_VehSpd_Kph_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_ASTLMT_APPL_VAR) AstLmt_Per1_WheelImbalanceCmd_MtrNm_f32;
  /* PIM Handles section */
  P2VAR(Boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SteerAsstDefeat;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Ap_AstLmt, RTE_CONST, RTE_CONST) Rte_Inst_Ap_AstLmt;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1408817965
#    error "The magic number of the generated file <C:/SynergyWorkspace/WorkingProjects/AstLmt_CM-gzkys7/AstLmt_CM/utp/contract/Ap_AstLmt/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1408817965
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
