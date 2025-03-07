###############################################################################
# File Name  : Vmm_defs.mak                                      #
# Description: Autosar makefile Template                                      #
#              This makefile is a template to implement the common            #
#              features of each project.                                      #
#              It is included by the Global.Makefile.target.make.$(Version)   #
#              and is supported from version 3.24 .                           #
#                                                                             #
# This Template is based on AUTOSAR_BSW_MakefileInterface.doc version 0.4     #
#                                                                             #
#-----------------------------------------------------------------------------#
#               C O P Y R I G H T                                             #
#-----------------------------------------------------------------------------#
# Copyright (c) 2008 by Vector Informatik GmbH.  All rights reserved.         #
#                                                                             #
#-----------------------------------------------------------------------------#
#               A U T H O R   I D E N T I T Y                                 #
#-----------------------------------------------------------------------------#
# Initials     Name                      Company                              #
# --------     ---------------------     -------------------------------------#
# Pet         Thomas Petrus           Vector Informatik GmbH               #
#-----------------------------------------------------------------------------#
#               R E V I S I O N   H I S T O R Y                               #
#-----------------------------------------------------------------------------#
# Date         Version  Sign Description                                      #
# ----------   -------  ---- -------------------------------------------------#
 # 2008/04/16   1.00     Pet   Initial Version based on template 1.0         #
#-----------------------------------------------------------------------------#
# TemplateVersion = 1.0                                                       #
# MAKEFILE        = 1.0                                                       #
###############################################################################

###############################################################
# INTERNAL REQUIRED CONFIGURATION (in can_cfg.mak)
#
# CAN_MODULES 	    (required)  (not necessary for Vector)
# CAN_DRIVER_MODE   (required)  (not necessary for Vector)
# CAN_PROJECT_PATH  (optional) 
# CAN_BUILD_LIBRARY (required)


###############################################################
# REQUIRED (defined in base_make)
# 
# PROJECT_ROOT
# SSC_ROOT
###############################################################


###############################################################
# SPECIFIC
# Specific variables which were defined here are only for local use in this Makefile
# if for example additional includes are necessary, these vars can be defined and used in the REGISTRY-Part.
# e.g.: $(CAN_CORE_PATH) = $(SSC_ROOT)\Can  could be used for CPP_INCLUDE_PATH    +=  $(CAN_CORE_PATH)\CPP_FILES\...
Vmm_CORE_PATH       =
# e.g.: CAN_OUTPUT_PATH = $(GENDATA_DIR)
Vmm_OUTPUT_PATH     = $(GENDATA_DIR)

#CAN_TOOL_PATH       = $(PROJECT_ROOT)\core\com\can\gentool

# it is also possible to generate own configurations with some checks like the following example
#  ifneq ( $(CAN_CONFIG_PATH),)
#      CAN_PROJECT_PATH    = $(CAN_CONFIG_PATH)
#  else
#     CAN_PROJECT_PATH    = $(PROJECT_ROOT)\source\network\can
#  endif 


###############################################################
# REGISTRY
# 
# $(SSC_PLUGINS) is a list of the components. Here can is added (not necessary for Vector, whole component-list also exists in Global.makefile.target.make...)
# e.g.: SSC_PLUGINS        += can
SSC_PLUGINS        += 
#e.g.: can_DEPENDENT_PLUGINS = 
Vmm_DEPENDENT_PLUGINS = 

#-----------------------------------------------------------------------------------------
# MakeSupport usually includes all header-files which were in the same
# directory as the source-files automatically, but to ensure that the
# Asr-Makefiles will also work with other Basic-Make-Packages,
# it is necessary to define all include directories for this Module
# e.g.: CC_INCLUDE_PATH     += $(CAN_CORE_PATH)\
#------------------------------------------------------------------------------------------
CC_INCLUDE_PATH     += Vmm
CPP_INCLUDE_PATH    +=
ASM_INCLUDE_PATH    +=

#PREPROCESSOR_DEFINES+= drivermode

#drivermode_KEY       = CAN_MODE
#drivermode_VALUE    = $(CAN_DRIVER_MODE)


###############################################################
# PROVIDE
#
# A Public Makefile does not provide resources for other basic
# software bundles or the base_make package.
###############################################################