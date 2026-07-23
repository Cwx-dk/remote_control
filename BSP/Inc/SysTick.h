#ifndef PUBLIC_SYSTICK_H_
#define PUBLIC_SYSTICK_H_

#include "main.h"

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

void SysTick_Init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);


#endif /* PUBLIC_SYSTICK_H_ */
