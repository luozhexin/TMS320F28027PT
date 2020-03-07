
//#############################################################################
//
//! \file User_Component/Delay/Delay.h
//!
//! \brief  Delay function
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


#ifndef _DELAY_H_
#define _DELAY_H_


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
//#define   EXAMPLE_obj   myGpio          //here myGpio is defined in System.h
//#define   EXAMPLE_PIN   GPIO_Number_??  //pin
//
// the function prototypes
//! \brief     EXAMPLE initail
//! \param[in] None
//! \param[out] None
//TARGET_EXT void EXAMPLE_initial(void);
//
//! \brief     EXAMPLE configure
//! \param[in] None
//! \param[out] None
//TARGET_EXT void EXAMPLE_config(void);
//
/*******************************************/
//! \brief     Interrup configure
//! \param[in] None
//! \param[out] None
//TARGET_EXT void EXAMPLE_INT_config(void);
//
//! \brief     Interrupt Service Routine
//! \param[in] None
//! \param[out] None
//TARGET_EXT interrupt void EXAMPLE_isr(void);     //redefined in Isr.h
/*-------end of hardware description -------------*/


/*------- API description of the example module   -------------*/
// EXAMPLE API
// the function prototypes
//! \brief     EXAMPLE API
//! \param[in] None
//! \param[out] None
//TARGET_EXT void EXAMPLE_API(void);

//! \brief     Delay
//! \param[in] time
//! \param[out] None
void Delay(uint32_t time);


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


#endif  // end of _DELAY_H_ definition

