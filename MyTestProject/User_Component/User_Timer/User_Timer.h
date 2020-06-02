/*/#ifndef __USER_TIMER_H
#define __USER_TIMER_H



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
TARGET_EXT void Initial_cpu_time0(void);
interrupt void cpu_timer0_isr(void);
TARGET_EXT uint16_t Number_LED_Blink;
/*------- end of defines  -------------*/

*/
/*
#ifdef __cplusplus
}
#endif // extern "C"


#endif  /*__USER_TIMER_H*/
*/
