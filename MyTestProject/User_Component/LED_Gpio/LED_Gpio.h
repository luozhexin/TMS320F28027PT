
//#############################################################################
//
//! \file    User_Component/LED_Gpio/LED_Gpio.h
//!
//! \brief   LED control by GPIO
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


#ifndef _LED_GPIO_H_
#define _LED_GPIO_H_


// **************************************************************************
// the includes
#include <stdint.h>

// driver
#include "F2802x_Component/F2802x_Device.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifndef TARGET_GLOBAL
   #define TARGET_EXT 	extern
#else
   #define TARGET_EXT
#endif


/*------- hardware description of the example module   -------------*/
// For example
// The module derived from GPIO
//#define   EXAMPLE_obj   myGpio          //here myGpio is defined in
                                          //F2802x_Component/F2802x_Device.h
//#define   EXAMPLE_PIN   GPIO_Number_??  //pin

#define   LED_Gpio_obj   myGpio          //object
#define   LED1           GPIO_Number_0  //pin
#define   LED2           GPIO_Number_1  //pin
#define   LED3           GPIO_Number_2  //pin
#define   LED4           GPIO_Number_3  //pin


TARGET_EXT GPIO_Number_e  LED[4];
//
// the function prototypes
//
// (1) module Initial
//! \brief     LED_GPIO module initial
//! \param[in] None
//! \param[out] None

TARGET_EXT void LED_GPIO_initial(void);
//
// (2) module Configure
// (2.1) module Pin configure
//! \brief     LED_GPIO Pin configure
//! \param[in] None
//! \param[out] None
TARGET_EXT void LED_GPIO_pinConfigure(void);
//
// (2.2) module function configure
//! \brief     LED_GPIO function configure
//! \param[in] None
//! \param[out] None
TARGET_EXT void LED_GPIO_functionConfigure(void);
//
// (2.3) module Event configure
//! \brief     LED_GPIO Event configure
//! \param[in] None
//! \param[out] None
TARGET_EXT void LED_GPIO_eventConfigure(void);
//
/*******************************************/

/*------- API description of the example module   -------------*/
// EXAMPLE API
// the function prototypes
//! \brief     EXAMPLE API
//! \param[in] None
//! \param[out] None
//TARGET_EXT void EXAMPLE_API(void);

//! \brief      LED on
//! \param[in]  None
//! \param[out] None
TARGET_EXT void inline LED_on(GPIO_Number_e led)
{
	GPIO_setLow(LED_Gpio_obj, led);
}
//! \brief      LED off
//! \param[in]  None
//! \param[out] None
TARGET_EXT void inline LED_off(GPIO_Number_e led)
{
	GPIO_setHigh(LED_Gpio_obj, led);
}

//! \brief      LED toggle
//! \param[in]  None
//! \param[out] None
TARGET_EXT void inline LED_toggle(GPIO_Number_e led)
{
	GPIO_toggle(LED_Gpio_obj, led);
}


/*-------end of API description -------------*/


/*------- Globals of the example module   -------------*/
// the globals

//! \brief Defines the Variable
//TARGET_EXT uint16_t  Example;

/*------- end of globals  -------------*/


/*------- Defines of the example module   -------------*/
// the defines

//! \brief Defines the constant
//#define EXAMPLE_DEF

/*------- end of defines  -------------*/



#ifdef __cplusplus
}
#endif // extern "C"


#endif  // end of _LED_GPIO_H_ definition

