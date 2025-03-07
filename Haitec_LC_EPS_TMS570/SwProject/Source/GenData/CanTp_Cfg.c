/* -----------------------------------------------------------------------------
  Filename:    CanTp_Cfg.c
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: CanTp
               
               Configuration   : C:\Temp\Haitec_LC_EPS_TMS570\Haitec_LC_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CAN00":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2013-07-19  08:51:14
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
    &&&~ Include files
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */
#include "CanTp_Types.h"
#include "CanTp.h"
/* END of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dispatcher for RxNsdus (ROM)
 ----------------------------------------------------------------------------- */

#define CANTP_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
FUNC(uint8, CANTP_CODE) GetAddressingType(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  return vCanTp_Cfg.vCanTp_rxPduMap[rxPduId].addrType;
}

FUNC(PduIdType, CANTP_CODE) GetRxSdu(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  return vCanTp_Cfg.vCanTp_rxPduMap[rxPduId].rxSduIdx;
}

FUNC(PduIdType, CANTP_CODE) GetRxSduExt(VAR(PduIdType, AUTOMATIC) rxPduId, VAR(uint8, AUTOMATIC) ta)
{
  VAR(PduIdType, AUTOMATIC) rxSduId;

  rxSduId = vCanTp_Cfg.vCanTp_rxPduMap[rxPduId].rxSduIdx;
  while ( (vCanTp_Cfg.NumCanTpRxSduId > rxSduId)
       && (vCanTp_Cfg.vCanTp_RxNsduCfg[rxSduId].CANTP_RXNPDU_ID == rxPduId)
       && (vCanTp_Cfg.vCanTp_RxNsduCfg[rxSduId].CANTP_RX_NTA != ta) )
  {
    ++rxSduId;
  }
  if ( (vCanTp_Cfg.NumCanTpRxSduId <= rxSduId)
    || (vCanTp_Cfg.vCanTp_RxNsduCfg[rxSduId].CANTP_RXNPDU_ID != rxPduId) )
  {
    rxSduId = CANTP_INVALID_HDL;
  }
  
  return rxSduId;
}

FUNC(PduIdType, CANTP_CODE) GetTxSdu(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  return vCanTp_Cfg.vCanTp_rxPduMap[rxPduId].txSduIdx;
}

FUNC(PduIdType, CANTP_CODE) GetTxSduExt(VAR(PduIdType, AUTOMATIC) rxPduId, VAR(uint8, AUTOMATIC) ta)
{
  VAR(PduIdType, AUTOMATIC) txSduId;

  txSduId = vCanTp_Cfg.vCanTp_rxPduMap[rxPduId].txSduIdx;
  while ( (vCanTp_Cfg.NumCanTpTxSduId > txSduId)
       && (vCanTp_Cfg.vCanTp_TxNsduCfg[txSduId].CANTP_RXFC_NPDU_ID == rxPduId)
       && (vCanTp_Cfg.vCanTp_TxNsduCfg[txSduId].CANTP_RXFC_NTA != ta) )
  {
    ++txSduId;
  }
  if ( (vCanTp_Cfg.NumCanTpTxSduId <= txSduId)
    || (vCanTp_Cfg.vCanTp_TxNsduCfg[txSduId].CANTP_RXFC_NPDU_ID != rxPduId) )
  {
    txSduId = CANTP_INVALID_HDL;
  }

  return txSduId;
}

/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"





