#include "User_Component/bsp_key/bsp_key.h"
void KEY_GPIO_pinConfigure(void)
{
    // 1. set mode
    //void GPIO_setMode(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Mode_e mode);
    GPIO_setMode(KEY_Gpio_obj, KEY1, GPIO_0_Mode_GeneralPurpose);

    // 2. set pullup
    //void GPIO_setPullUp(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_PullUp_e pullUp);
    GPIO_setPullUp(KEY_Gpio_obj, KEY1, GPIO_PullUp_Disable);


    // 3. set direction
    //void GPIO_setDirection(GPIO_Handle gpioHandle,const GPIO_Number_e gpioNumber,const GPIO_Direction_e direction);
    GPIO_setDirection(KEY_Gpio_obj, KEY1, GPIO_Direction_Input);

}

unsigned Key_scan(GPIO_Number_e GPIOx)
{
    if(GPIO_ReadInputData(KEY_Gpio_obj,GPIOx)==KEY_ON)
    {
        while(GPIO_ReadInputData(KEY_Gpio_obj,GPIOx)==KEY_ON)
            return KEY_ON;
    }
    else
        return KEY_OFF;
}
unsigned GPIO_ReadInputData(GPIO_Handle gpioHandle,GPIO_Number_e GPIOx)
{
    GPIO_Obj *gpio = (GPIO_Obj *)gpioHandle;
    unsigned bitstatus = 0x00;
    if (((gpio->GPADAT) <<GPIOx)!= (unsigned)Bit_RESET)
      {
        bitstatus = (unsigned)Bit_SET;
      }
      else
      {
        bitstatus = (unsigned)Bit_RESET;
      }
      return bitstatus;
}
