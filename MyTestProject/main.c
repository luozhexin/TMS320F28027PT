
/*
 * main.c
 */

#define TARGET_GLOBAL 1

#include "Application\app.h"
#include "User_Component/bsp_key/bsp_key.h"


void main(void)
{
    //1. System runtime environment
    User_System_pinConfigure();
    User_System_functionConfigure();
    User_System_eventConfigure();
    User_System_initial();

    //2. Module
    //2.1 LED_Gpio
    LED_GPIO_pinConfigure();
    LED_GPIO_functionConfigure();
    LED_GPIO_eventConfigure();
    LED_GPIO_initial();


    //3. PIE runtime environment(if use interrupt)

    //4. the global interrupt start (if use interrupt)

    //5. main LOOP
    while(1)
    {
        if(Key_scan(KEY1)==KEY_ON)
       {
       // call API from app.h
       // LED_Control();
            LED_Control1();
       }



        //myGpio->GPACLEAR=1;

      // myGpio->GPACLEAR = 2;
      // myGpio->GPADAT=1;
//        myGpio->GPACLEAR = 4;
//        myGpio->GPACLEAR = 8;



    }


}
