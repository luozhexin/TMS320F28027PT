//#############################################################################
//
//! \file  User_Component/LED_Gpio/LED_Gpio.c
//!
//! \brief LED control by GPIO
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
#include "User_Component/LED_Gpio/LED_Gpio.h"


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
	LED_off(LED1);
	LED_off(LED2);
	LED_off(LED3);
	LED_off(LED4);

	LED[0]=GPIO_Number_0;
	LED[1]=GPIO_Number_1;
	LED[2]=GPIO_Number_2;
	LED[3]=GPIO_Number_3;
}
//
// (2) module Configure
// (2.1) module Pin configure
//! \brief     LED_GPIO Pin configure
//! \param[in] None
//! \param[out] None
void LED_GPIO_pinConfigure(void)
{
	// 1. set mode
	//void GPIO_setMode(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Mode_e mode);
	GPIO_setMode(LED_Gpio_obj, LED1, GPIO_0_Mode_GeneralPurpose);
	GPIO_setMode(LED_Gpio_obj, LED2, GPIO_1_Mode_GeneralPurpose);
	GPIO_setMode(LED_Gpio_obj, LED3, GPIO_2_Mode_GeneralPurpose);
	GPIO_setMode(LED_Gpio_obj, LED4, GPIO_3_Mode_GeneralPurpose);

	// 2. set pullup
	//void GPIO_setPullUp(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_PullUp_e pullUp);
	GPIO_setPullUp(LED_Gpio_obj, LED1, GPIO_PullUp_Disable);
	GPIO_setPullUp(LED_Gpio_obj, LED2, GPIO_PullUp_Disable);
	GPIO_setPullUp(LED_Gpio_obj, LED3, GPIO_PullUp_Disable);
	GPIO_setPullUp(LED_Gpio_obj, LED4, GPIO_PullUp_Disable);

	// 3. set direction
	//void GPIO_setDirection(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Direction_e direction);
	GPIO_setDirection(LED_Gpio_obj, LED1, GPIO_Direction_Output);
	GPIO_setDirection(LED_Gpio_obj, LED2, GPIO_Direction_Output);
	GPIO_setDirection(LED_Gpio_obj, LED3, GPIO_Direction_Output);
	GPIO_setDirection(LED_Gpio_obj, LED4, GPIO_Direction_Output);

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



// end of file
