
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Ap_PeakCurrEst_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 05.07.2013 13:38:44
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          1 %
 * %date_modified:    Fri Jul 19 13:31:29 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 09/20/12   1       ssk       Initial template creation
 * 	 	
 */

#ifndef AP_PEAKCURREST_CFG_H
#define AP_PEAKCURREST_CFG_H


/*******************************************************************************
**                      Define Section                                       **
*******************************************************************************/


/* Disable all checkpoints that are not enabled */
#define Rte_Call_PeakCurrEst_Per1_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_PeakCurrEst_Per1_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_PeakCurrEst_Per2_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_PeakCurrEst_Per2_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
   
#endif /* PEAKCURREST_CFG_H */

/*** End of file **************************************************************/
