//#############################################################################
//
//! \file   User_Component/LED_GPIO/LED_GPIO.C
//!
//! \brief   LED Control by GPIO
//!
//  Quthor:
//  Group:          C2000
//  Target Device:  TMS320F2802x
//
//  (C) Copyright 2015, Fuzhou University.
//#############################################################################
// $TI Release: f2802x Support Library v210 $
// $Release Date: Mon Sep 17 09:13:31 CDT 2012 $
//#############################################################################

// **************************************************************************
// the includes
#include "User_Component/LED_GPIO/LED_GPIO.h"


// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions

// (1) module Initial
//! \brief     LED_GPIO module initial
//! \param[in] None
//! \param[out] None
void LED_GPIO_initial(void)
{


}
//
// (2) module Configure
// (2.1) module Pin configure
//! \brief     LED_GPIO Pin configure
//! \param[in] None
//! \param[out] None
void LED_GPIO_pinConfigure(void)
{   //1. set pullup
	//void GPIO_setPullUp(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_PullUp_e pullUp);
	GPIO_setPullUp(myGpio, GPIO_Number_0, GPIO_PullUp_Enable);

	//2. set mode
	//void GPIO_setMode(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Mode_e mode);
	GPIO_setMode(myGpio, GPIO_Number_0, GPIO_0_Mode_GeneralPurpose);

	//3. set direction
	//void GPIO_setDirection(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Direction_e direction);
	GPIO_setDirection(myGpio, GPIO_Number_0, GPIO_Direction_Output);

}
//
// (2.2) module function configure
//! \brief     LED_GPIO function configure
//! \param[in] None
//! \param[out] None
void LED_GPIO_functionConfigure(void)
{


}
//
// (2.3) module Event configure
//! \brief     LED_GPIO Event configure
//! \param[in] None
//! \param[out] None
void LED_GPIO_eventConfigure(void)
{


}
                      
// **************************************************************************
// the API functions
//! \brief     LED ON
//! \param[in] led
//! \param[out] None
void LED_on(GPIO_Number_e led)
{
	GPIO_setLow(myGpio, led);

}

//! \brief     LED OFF
//! \param[in] led
//! \param[out] None
void LED_off(GPIO_Number_e led)
{
	GPIO_setHigh(myGpio, led);

}

//! \brief     LED TOGGLE
//! \param[in] led
//! \param[out] None
void LED_toggle(GPIO_Number_e led)
{
	GPIO_toggle(myGpio, led);

}



// end of file
