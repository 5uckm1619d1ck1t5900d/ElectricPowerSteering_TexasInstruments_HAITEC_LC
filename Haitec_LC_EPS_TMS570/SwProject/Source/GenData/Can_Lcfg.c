/* -----------------------------------------------------------------------------
  Filename:    Can_Lcfg.c
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: DrvCan__coreAsr
               
               Configuration   : C:\SynergyProjects\Haitec_LC_EPS_TMS570-nzx5jd\Haitec_LC_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CAN00":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-02-13  10:21:39
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC */
#include "Can_Cfg.h"
/* END of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC */


#define CAN_START_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum exclude for
  - DrvCan__baseAsrPrecompileCRC */
CONST(Can_ConfigType, CAN_CONST_PBCFG) CanConfig = 
{
  1 /* CanControllerMax Base_Generated */, 
  0 /* Configuration Id Base_Generated */, 
  (CanControllerConfig_TabPtrType) 0 /* Pointer to CanControllerConfig Struct Base_Generated */, 
  (CanMailbox_TabPtrType) 0 /* Pointer to Can_Mailbox Struct Base_Generated */, 
  (CanInitObjectStartIndex_TabPtrType) 0 /* Pointer to CanInitObjectStartIndex Struct Base_Generated */, 
  255 /* CanErrata22Iterations */, 
  (uint16*) 0 /* Pointer to CanInitBRP_RegPtr */, 
  (uint16*) 0 /* Pointer to CanInitBitTimingPtr */, 
  (uint16*) 0 /* Pointer to CanInitBasicMskPtr */, 
  (uint16*) 0 /* Pointer to CanInitBasicMskLoPtr */, 
  (uint16*) 0 /* Pointer to CanInitBasicCodPtr */, 
  (uint16*) 0 /* Pointer to CanInitBasicCodLoPtr */, 
  (uint32*) 0 /* Pointer to CanBasisAdrPtr */, 
  (uint32*) 0 /* Pointer to interruptSrcPtr */, 
  (uint32*) 0 /* Pointer to vimClrRegPtr */, 
  (uint32*) 0 /* Pointer to vimSetRegPtr */, 
  (uint8*) 0 /* Pointer to CanNumberOfMsgObjPtr */, 
  0x0106u /* Can_BaseDll_GeneratorVersion */, 
  0x0101u /* Can_PlatformDll_GeneratorVersion */, 
  0xAFFEu /* MagicNumber */
};
/* END of Checksum exclude for
  - DrvCan__baseAsrPrecompileCRC */

#define CAN_STOP_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CAN_START_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum exclude for
  - DrvCan__baseAsrPrecompileCRC */
/* -----------------------------------------------------------------------------
    &&&~ CanMailbox
 ----------------------------------------------------------------------------- */

CONST(Can_MailboxType, CAN_CONST_PBCFG) CanMailbox[17] = 
{
  
  {
    0x039Au /* Can_IdType IDValue */, 
    0u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x039Eu /* Can_IdType IDValue */, 
    1u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x06E5u /* Can_IdType IDValue */, 
    2u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x0707u /* Can_IdType IDValue */, 
    3u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x07B2u /* Can_IdType IDValue */, 
    4u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x07F1u /* Can_IdType IDValue */, 
    5u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    3u /* uint8 MailboxType TxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x00u /* Can_IdType IDValue */, 
    6u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    2u /* uint8 MailboxType TxBasicCANType */, 
    1u /* uint8 FIFO size */
  }, 
  
  {
    0x00u /* Can_IdType IDValue */, 
    7u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    4u /* uint8 MailboxType UnusedCANType */, 
    47u /* uint8 FIFO size */
  }, 
  
  {
    0x07F0u /* Can_IdType IDValue */, 
    54u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x07D0u /* Can_IdType IDValue */, 
    55u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x0772u /* Can_IdType IDValue */, 
    56u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x0700u /* Can_IdType IDValue */, 
    57u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x0695u /* Can_IdType IDValue */, 
    58u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    8u /* uint8 DLCValue */
  }, 
  
  {
    0x0420u /* Can_IdType IDValue */, 
    59u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    1u /* uint8 DLCValue */
  }, 
  
  {
    0x0360u /* Can_IdType IDValue */, 
    60u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    2u /* uint8 DLCValue */
  }, 
  
  {
    0x0316u /* Can_IdType IDValue */, 
    61u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    1u /* uint8 MailboxType RxFullCANType */, 
    4u /* uint8 DLCValue */
  }, 
  
  {
    0x00u /* Can_IdType IDValue */, 
    62u /* Can_HwHandleType HwHandle */, 
    0u /* HW controller */, 
    0u /* uint8 MailboxType RxBasicCANType */, 
    2u /* uint8 FIFO size */
  }
};


/* -----------------------------------------------------------------------------
    &&&~ CanControllerConfig
 ----------------------------------------------------------------------------- */

CONST(Can_ControllerConfigType, CAN_CONST_PBCFG) CanControllerConfig[1] = 
{
  
  {
    0 /* Can_HwHandleType TxFullHandleStart, iNrOfObj: 6, iStartIndex: 0 */, 
    6 /* Can_HwHandleType TxFullHandleStop */, 
    6 /* Can_HwHandleType TxFullHandleMax */, 
    6 /* Can_HwHandleType TxBasicHandleStart, iNrOfObj: 1, iStartIndex: 6 */, 
    7 /* Can_HwHandleType TxBasicHandleStop */, 
    1 /* Can_HwHandleType TxBasicHandleMax */, 
    7 /* Can_HwHandleType UnusedHandleStart, iNrOfObj: 1, iStartIndex: 7 */, 
    8 /* Can_HwHandleType UnusedHandleStop */, 
    1 /* Can_HwHandleType UnusedHandleMax */, 
    8 /* Can_HwHandleType RxFullHandleStart, iNrOfObj: 8, iStartIndex: 8 */, 
    16 /* Can_HwHandleType RxFullHandleStop */, 
    8 /* Can_HwHandleType RxFullHandleMax */, 
    16 /* Can_HwHandleType RxBasicHandleStart, iNrOfObj: 1, iStartIndex: 16 */, 
    17 /* Can_HwHandleType RxBasicHandleStop */, 
    1 /* Can_HwHandleType RxBasicHandleMax */, 
    17 /* Can_HwHandleType HandleMax */
  }
};


/* -----------------------------------------------------------------------------
    &&&~ CanInitObjectTable
 ----------------------------------------------------------------------------- */

CONST(uint8, CAN_CONST_PBCFG) CanInitObjectStartIndex[2] = 
{
  0, 
  1
};


/* -----------------------------------------------------------------------------
    &&&~ Hw specific tables
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC
  - DrvCan__baseAsrPrecompileCRC */
CONST(uint16, CAN_CONST_PBCFG) CanInitBRP_Reg[1] = 
{
  0x00u
};
CONST(uint16, CAN_CONST_PBCFG) CanInitBitTiming[1] = 
{
  0x2B89u
};
CONST(uint16, CAN_CONST_PBCFG) CanInitBasicMsk[1] = 
{
  0xFFFCu
};
CONST(uint16, CAN_CONST_PBCFG) CanInitBasicMskLo[1] = 
{
  0x0000u
};
CONST(uint16, CAN_CONST_PBCFG) CanInitBasicCod[1] = 
{
  0x0000u
};
CONST(uint16, CAN_CONST_PBCFG) CanInitBasicCodLo[1] = 
{
  0x0000u
};
CONST(uint32, CAN_CONST_PBCFG) CanBasisAdr[1] = 
{
  0xFFF7DC00u
};
CONST(uint32, CAN_CONST_PBCFG) interruptSrc[1] = 
{
  0x00010000u
};
CONST(uint32, CAN_CONST_PBCFG) vimClrReg[1] = 
{
  0xFFFFFE40u
};
CONST(uint32, CAN_CONST_PBCFG) vimSetReg[1] = 
{
  0xFFFFFE30u
};
CONST(uint8, CAN_CONST_PBCFG) CanNumberOfMsgObj[1] = 
{
  64
};
/* END of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC
  - DrvCan__baseAsrPrecompileCRC */


/* END of Checksum exclude for
  - DrvCan__baseAsrPrecompileCRC */

#define CAN_STOP_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



/* -----------------------------------------------------------------------------
    &&&~ RAM variables
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC */
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint8, CAN_VAR_NOINIT) lastInitObject[kCanNumberOfMaxUsedControllers];
VAR(Can_SignedHwHandleType, CAN_VAR_NOINIT) canTxOffsetHwToLog[kCanNumberOfMaxUsedControllers];
VAR(tCanLLCanIntOld, CAN_VAR_NOINIT) canCanInterruptOldStatus[kCanNumberOfUsedHwChannels];
volatile VAR(uint8, CAN_VAR_NOINIT) canInterruptCounter[kCanNumberOfMaxUsedControllers];
#if (CAN_WAKEUP_SUPPORT == STD_ON)
volatile VAR(boolean, CAN_VAR_NOINIT) canIsWakeup[kCanNumberOfMaxUsedControllers];
#endif

volatile VAR(boolean, CAN_VAR_NOINIT) canIsBusOff[kCanNumberOfMaxUsedControllers];
volatile VAR(uint8, CAN_VAR_NOINIT) canStatus[kCanNumberOfMaxUsedControllers];
#if (CAN_HARDWARE_CANCELLATION == STD_ON) || (CAN_MICROSAR_VERSION == CAN_MSR40)
volatile VAR(uint32, CAN_VAR_NOINIT) canLoopTimeout[kCanNumberOfMaxUsedControllers][CAN_LOOP_MAX];
#endif

#if (CAN_HARDWARE_CANCELLATION == STD_ON)
VAR(uint8, CAN_VAR_NOINIT) canIsHardwareCanceled[kCanNumberOfMaxUsedControllers];
#endif

#if ((CAN_DEV_ERROR_DETECT == STD_ON) || defined(CAN_ENABLE_SELECTABLE_PB))
P2CONST(Can_ControllerConfigType, CAN_VAR_NOINIT, CAN_CONST_PBCFG) canControllerConfigPtr[kCanNumberOfUsedHwChannels];
#endif

#if ((CAN_HW_TRANSMIT_CANCELLATION == STD_ON) && (CAN_TRANSMIT_BUFFER == STD_ON))
VAR(uint8, CAN_VAR_NOINIT) canTxBasicDataBuffer[kCanNumberOfMaxUsedControllers][CAN_MULTIPLEXED_TX_MAX][8];
#endif

VAR(PduIdType, CAN_VAR_NOINIT) CanActiveSendPdu[kCanNumberOfUsedTxCANObjects];
VAR(uint8, CAN_VAR_NOINIT) CanActiveSendState[kCanNumberOfUsedTxCANObjects];

#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum exclude for
  - DrvCan__baseAsrLinktimeCRC */


/* START of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(tRxMsgObj, CAN_VAR_NOINIT) rxMsgObj[1];
VAR(tTxMsgObj, CAN_VAR_NOINIT) txMsgObj[kCanNumberOfUsedTxCANObjects];
VAR(uint8, CAN_VAR_NOINIT) status_sleep[1];
VAR(uint8, CAN_VAR_NOINIT) status_stop[1];
VAR(uint16, CAN_VAR_NOINIT) status_busoff[1];
VAR(uint32, CAN_VAR_NOINIT) normal_mode[1];
VAR(uint16, CAN_VAR_NOINIT) canllStatus[1];
VAR(uint32, CAN_VAR_NOINIT) txsendflag[4][1];

#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */

/* -----------------------------------------------------------------------------
    &&&~ CanWakeupSourceRef
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */
#define CAN_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(EcuM_WakeupSourceType, CAN_CONST) CanWakeupSourceRef[1] = 
{
  0
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ CanControllerBaudrateConfig
 ----------------------------------------------------------------------------- */

#define CAN_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(Can_ControllerBaudrateConfigType, CAN_CONST) Can_ControllerBaudrateConfig[3] = 
{
  0, 
  1, 
  2
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ DEM Error Handling
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */
#define CAN_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(Dem_EventIdType, CAN_CONST) canDemErrorTimeout = CAN_E_TIMEOUT;
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ CommonCAN
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */
#define CAN_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define CAN_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* END of Checksum include for
  - DrvCan__baseAsrLinktimeCRC */



