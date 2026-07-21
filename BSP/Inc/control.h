#ifndef __CONTROL_H
#define __CONTROL_H

#include "main.h"

extern uint16_t ADC1_number1;
extern uint16_t ADC2_number1;


void control_init(void);
uint16_t control_get_adc1_number1(void);
uint16_t control_get_adc1_number2(void);
void control_get_all_adc(void);


#endif /* __CONTROL_H */
