/*#include "User_Component/User_Timer/User_Timer.h"
#include "F2802x_Component/include/timer.h"
void Initial_cpu_time0(void)
{
    TIMER_stop(myTimer0);
    TIMER_setPeriod(myTimer0,mSec1000);
    TIMER_setPreScaler(myTimer0,0);
    TIMER_reload(myTimer0);
    PIE_unregisterPieIntHandler(myPie,PIE_GroupNumber_1,PIE_SubGroupNumber_7,(intVec_t)&cpu_timer0_isr);
    TIMER_enableInt(myTimer0);
    PIE_enableInt(myPie,PIE_GroupNumber_1,PIE_InterruptSource_TIMER_0);
    CPU_enableInt(myCpu,CPU_IntNumber_1);
    CPU_enableGlobalInts(myCpu);
    TIMER_start(myTimer0);
}

interrupt void cpu_timer0_isr(void)
{
    Number_LED_Blink++;
    if(Number_LED_Blink>=4)
    {
        Number_LED_Blink=0;
    }
    led_control_Blink();
    PIE_clearInt(myPie,PIE_GroupNumber_1);
}

void led_control_Blink(void)
{
    switch(Number_LED_Blink)
    {
    case 0: GPIO_setPortData(myGpio,GPIO_Port_A,0xE);break;
    case 1: GPIO_setPortData(myGpio,GPIO_Port_A,0xD);break;
    case 2: GPIO_setPortData(myGpio,GPIO_Port_A,0xB);break;
    case 3: GPIO_setPortData(myGpio,GPIO_Port_A,0x7);break;
    }
}
*/
