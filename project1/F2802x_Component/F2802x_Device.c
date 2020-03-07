// $Revision:  $
// $Date: Jan 31, 2015   11:11:30 $
// Author£∫
//###########################################################################
//
// FILE:	F2802x_Device.c
// TITLE:	F2802x Device authorize
//
//###########################################################################

//includes
#include "F2802x_Device.h"

// function
void System_authorize(void)    //system authorize
{
	myCpu = CPU_init((void *)NULL, sizeof(CPU_Obj));
    myWDog = WDOG_init((void *)WDOG_BASE_ADDR, sizeof(WDOG_Obj));
    myPll = PLL_init((void *)PLL_BASE_ADDR, sizeof(PLL_Obj));
    myClk = CLK_init((void *)CLK_BASE_ADDR, sizeof(CLK_Obj));

    myGpio = GPIO_init((void *)GPIO_BASE_ADDR, sizeof(GPIO_Obj));
 //   myGpio = (void *)GPIO_BASE_ADDR;


	myPie = PIE_init((void *)PIE_BASE_ADDR, sizeof(PIE_Obj));   //÷–∂œ÷∏’Î∏≥÷µ
//	myTimer0 = TIMER_init((void *)TIMER0_BASE_ADDR, sizeof(TIMER_Obj));
//	myPwm1 = PWM_init((void *)PWM_ePWM1_BASE_ADDR, sizeof(PWM_Obj)); // PWM1
//	myAdc = ADC_init((void *)ADC_BASE_ADDR, sizeof(ADC_Obj)); // ADC
}

//===========================================================================
// End of file.
//===========================================================================



