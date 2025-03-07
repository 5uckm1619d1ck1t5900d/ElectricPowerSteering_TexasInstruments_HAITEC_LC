/* -----------------------------------------------------------------------------
  Filename:    Dem_PBcfg.c
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
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

  Generated by , 2014-12-17  10:17:24
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

/* configuration, interrupt handling implementations differ from the 
 * source identification define used here. The naming 
 * schemes for those files can be taken from this list: 
 * 
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_PBCFG_SOURCE
#include "Dem.h"
#include "Dem_Lcfg.h"
#include "Dem_PBcfg.h"


/* -----------------------------------------------------------------------------
    &&&~ Version Check
 ----------------------------------------------------------------------------- */

#if (DIAG_ASRDEM_GENTOOL_GENY_MAJOR_VERSION != 0x03)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_MAJOR_VERSION in generated File!"
#endif

#if (DIAG_ASRDEM_GENTOOL_GENY_MINOR_VERSION != 0x03)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_MINOR_VERSION in generated File!"
#endif

#if (DIAG_ASRDEM_GENTOOL_GENY_PATCH_VERSION != 0x00)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_PATCH_VERSION in generated File!"
#endif



/* -----------------------------------------------------------------------------
    &&&~ Post-build changeable config data tables
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_PBCONST_ROOT
#include "MemMap.h"

CONST(Dem_PBConfigType, DEM_PBCFG) Dem_PBConfig = 
{
  0xDE021400 /* Implementation Version */, 
  0xFFFFFFFF, 
  0xDEDEDEDE
};
#define DEM_STOP_SEC_PBCONST_ROOT
#include "MemMap.h"

#define DEM_START_SEC_PBCONST
#include "MemMap.h"

CONST(uint8, DEM_PBCFG) Dem_PostBuildProperty[] = 
{
  0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint16, DEM_PBCFG) Dem_DTCNumberTable[] = 
{
  0xFFFF, 0xD140, 0xD121, 0xD117, 0xD003, 0x5059, 0x5058, 0x5057, 0x5056, 0x5055, 0x5054, 0x5053, 0x5053, 0x5052, 0x5051, 0xFFFF, 
  0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
  0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
};
CONST(uint8, DEM_PBCFG) Dem_DTC_FTB_Table[] = 
{
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x16, 0x00, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
CONST(uint8, DEM_PBCFG) Dem_EventFlagsTable[] = 
{
  0, 0, 1, 0
};
CONST(Dem_DTCKindType, DEM_PBCFG) Dem_DtcKindTable[] = 
{
  0, 1, 1, 1
};
CONST(uint8, DEM_PBCFG) Dem_EventDestinationTable[] = 
{
  0, 0, 2, 2
};
#define DEM_STOP_SEC_PBCONST
#include "MemMap.h"




