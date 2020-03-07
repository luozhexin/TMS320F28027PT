
/*
 * main.c
 */

#define TARGET_GLOBAL 1

#include "Application\app.h"


void main(void)
{
    //1. System runtime environment
	User_System_pinConfigure();
	User_System_functionConfigure();
	User_System_eventConfigure();
	User_System_initial();

	//2. Module
	LED_GPIO_pinConfigure();
	LED_GPIO_functionConfigure();
	LED_GPIO_eventConfigure();
	LED_GPIO_initial();


	//3. PIE runtime environment(if use interrupt)

	//4. the global interrupt start (if use interrupt)

	//5. main LOOP
    for( ; ; )
    {
    	// call API from app.h
    	LED_Control();
    }


}

