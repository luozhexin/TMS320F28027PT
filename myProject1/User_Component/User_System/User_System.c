//#############################################################################
//
//! \file  User_System.c
//!
//! \brief System runtime environment
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
#include "User_Component/User_System/User_System.h"

// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions

//! \brief     User_System module initial
//! \param[in] None
//! \param[out] None
void User_System_initial(void)
{

}
//
// (2) module Configure
// (2.1) module Pin configure
//! \brief     User_System Pin configure
//! \param[in] None
//! \param[out] None
void User_System_pinConfigure(void)
{

}
//
// (2.2) module function configure
//! \brief     User_System function configure
//! \param[in] None
//! \param[out] None
void User_System_functionConfigure(void)
{
    // 0. system authorize
	System_authorize();
	// 1. disable watch DOG
    WDOG_disable(myWDog);
    // 2. disable interrupt
    CPU_disableGlobalInts(myCpu);
    // 3. Select the internal oscillator 1(10MHz) as the clock source
    CLK_setOscSrc(myClk, CLK_OscSrc_Internal);
    // 4. Setup the PLL for x12 /2 which will yield 60Mhz = 10Mhz * 12 / 2
    PLL_setup(myPll, PLL_Multiplier_12, PLL_DivideSelect_ClkIn_by_2);
    // 5. Module's Clock configure
//    CLK_enableGpioInputClock(myClk); //Gpio Input clock
//	CLK_enableAdcClock(myClk);  //ADC colck
//	CLK_enableCpuTimerClock(myClk, CLK_CpuTimerNumber_0);//Cpu Timer0 clock
	//CLK_enableCpuTimerClock(myClk, CLK_CpuTimerNumber_1);//Cpu Timer1 clock
	//CLK_enableCpuTimerClock(myClk, CLK_CpuTimerNumber_2);//Cpu Timer2 clock
	//CLK_enablePwmClock(myClk, PWM_Number_1); //EPWM1 clock
	//CLK_enablePwmClock(myClk, PWM_Number_2); //EPWM2 clock
	//CLK_enablePwmClock(myClk, PWM_Number_3); //EPWM3 clock
	//CLK_enablePwmClock(myClk, PWM_Number_4); //EPWM4 clock
	//CLK_enableHrPwmClock(myClk);  //HRPWM clock
	//CLK_enableEcap1Clock(myClk);  //ECAP clock
	//CLK_enableI2cClock(myClk);  //I2C clock
	//CLK_enableSciaClock(myClk);  //SCIA clock
	//CLK_enableSpiaClock(myClk);  //SPIA clock
 	//CLK_enableCompClock(myClk, CLK_CompNumber_1);//COMP1 clock
	//CLK_enableCompClock(myClk, CLK_CompNumber_2);//COMP2 clock
	//CLK_enableCompClock(myClk, CLK_CompNumber_3);//COMP3 clock

    // 6. PIE configure
    PIE_disable(myPie);                                      //��ֹPIE
    PIE_disableAllInts(myPie);                                //��ֹPIE�ж�
    CPU_disableGlobalInts(myCpu);                            //CPUȫ���жϽ�ֹ
    CPU_clearIntFlags(myCpu);                               //CPU�жϱ�־λ����
    PIE_setDefaultIntVectorTable(myPie);                      //�ж���ڵ�ַ����Ĭ��ֵ
    PIE_enable(myPie);                                      //ʹ��PIE
}
//
// (2.3) module Event configure
//! \brief     User_System Event configure
//! \param[in] None
//! \param[out] None
void User_System_eventConfigure(void)
{

}


                      
// **************************************************************************
// the API functions



// end of file
