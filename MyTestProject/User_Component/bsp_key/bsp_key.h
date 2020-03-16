#ifndef __KEY_H
#define __KEY_H


// the includes
#include <stdint.h>

// driver
#include "F2802x_Component/F2802x_Device.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifndef TARGET_GLOBAL
   #define TARGET_EXT   extern
#else
   #define TARGET_EXT
#endif
//define
//#define     KEY1_GPIO_CLK
//#define     KEY1_GPIO_PORT
//#define     KEY1_GPI0_PIN


#define   KEY_Gpio_obj   myGpio //object
#define   KEY1          GPIO_Number_4  //pin

#define KEY_ON  1
#define KEY_OFF 0


typedef enum
{ Bit_RESET = 0,
  Bit_SET
}BitAction;

void KEY_GPIO_pinConfigure(void);
unsigned Key_scan( GPIO_Number_e GPIOx);
unsigned GPIO_ReadInputData(GPIO_Handle gpioHandle,GPIO_Number_e GPIOx);

/*------- end of defines  -------------*/



#ifdef __cplusplus
}
#endif // extern "C"


#endif  // end of __KEY_H definition
