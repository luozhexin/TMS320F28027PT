//#############################################################################
//
//! \file  Application\app.c
//!
//! \brief  application
//
//  Author:
//  Group:          C2000
//  Target Device:  TMS320F2802x
//
//  (C) Copyright 2014, Texas Instruments, Inc.
//#############################################################################
// $TI Release: f2802x Support Library v210 $
// $Release Date: Mon Sep 17 09:13:31 CDT 2012 $
//#############################################################################

// **************************************************************************
// the includes
#include "Application/app.h"


// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions
//! \brief     LED Control
//! \param[in] None
//! \param[out] None
void LED_Control(void)
{
    LED_on(LED1);
    Delay(1000000L);
    LED_off(LED1);
    Delay(1000000L);

}

// end of file
