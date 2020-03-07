
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


}
