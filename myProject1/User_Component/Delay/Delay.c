//#############################################################################
//
//! \file User_Component/Delay/Delay.c
//!
//! \brief  Delay function
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
#include "User_Component/Delay/Delay.h"


// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions

//! \brief     Delay
//! \param[in] time
//! \param[out] None
void Delay(uint32_t time)
{
	while(time--) ;
}
                      


// end of file
