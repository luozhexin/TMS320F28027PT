
//#############################################################################
//
//! \file    Application\isr.h
//!
//! \brief   Interrupt Service Routine
//!
//  Quthor:
//  Group:          C2000
//  Target Device:  TMS320F2802x
//
//  (C) Copyright 2014, Fuzhou University.
//#############################################################################
// $TI Release: f2802x Support Library v210 $
// $Release Date: Mon Sep 17 09:13:31 CDT 2012 $
//#############################################################################


#ifndef _ISR_H_
#define _ISR_H_


// **************************************************************************
// the includes
#include <stdint.h>

// driver
#include "User_Component/User_Device.h"


#ifdef __cplusplus
extern "C" {
#endif


#ifndef TARGET_GLOBAL
   #define TARGET_EXT 	extern
#else
   #define TARGET_EXT
#endif


// isr API
//! \brief     isr
//! \param[in] None
//! \param[out] None
//TARGET_EXT interrupt void isr(void);


#ifdef __cplusplus
}
#endif // extern "C"


#endif  // end of _EXAMPLE_H_ definition

