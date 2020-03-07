// USER File $Revision: /main/3 $
// Checkin $Date: Oct 10, 2013   12:51:13 $
// Author£º
//###########################################################################
//
// FILE:   F2802x_Device.h
//
// TITLE:  F2802x Device Authorize

#ifndef F2802X_DEVICE_H
#define F2802X_DEVICE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TARGET_GLOBAL
   #define TARGET_EXT 	extern
#else
   #define TARGET_EXT
#endif

//includes
#include "F2802x_Component/include/adc.h"
#include "F2802x_Component/include/clk.h"
#include "F2802x_Component/include/flash.h"
#include "F2802x_Component/include/gpio.h"
#include "F2802x_Component/include/pie.h"
#include "F2802x_Component/include/pll.h"
#include "F2802x_Component/include/timer.h"
#include "F2802x_Component/include/wdog.h"
#include "F2802x_Component/include/pwm.h"
#include "F2802x_Component/include/cap.h"
#include "F2802x_Component/include/sci.h"

// F2802x Device Define

TARGET_EXT CLK_Handle myClk;
TARGET_EXT CPU_Handle myCpu;
TARGET_EXT PLL_Handle myPll;
TARGET_EXT WDOG_Handle myWDog;
TARGET_EXT PIE_Handle myPie;
TARGET_EXT GPIO_Handle myGpio;
//TARGET_EXT TIMER_Handle myTimer0;
//TARGET_EXT ADC_Handle myAdc;
//TARGET_EXT PWM_Handle myPwm1;

TARGET_EXT void System_authorize(void);    //system authorize

#ifdef __cplusplus
}
#endif /* extern "C" */



#endif   // end of _F2802X_DEVICE_H_ definition



