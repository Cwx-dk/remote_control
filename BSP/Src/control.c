#include "control.h"
#include "adc.h"
#include "stm32f103xb.h"
#include "stm32f1xx_hal_adc.h"

uint16_t ADC1_number1 = 0;
uint16_t ADC2_number1 = 0;

void control_init(void)
{
    HAL_ADC_Start(&hadc1);
    HAL_ADC_Start(&hadc2);
}

uint16_t control_get_adc1_number1(void)
{
    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
    ADC1_number1 = HAL_ADC_GetValue(&hadc1);
    return ADC1_number1;
}

uint16_t control_get_adc2_number1(void)
{
    HAL_ADC_PollForConversion(&hadc2, HAL_MAX_DELAY);
    ADC2_number1 = HAL_ADC_GetValue(&hadc2);
    return ADC2_number1;
}
void control_get_all_adc(void)
{
    // 1. 读取 X 轴 (ADC1 - PA0)
    HAL_ADC_Start(&hadc1);
    if (HAL_ADC_PollForConversion(&hadc1, 10) == HAL_OK)
    {
        ADC1_number1 = HAL_ADC_GetValue(&hadc1);
    }
    HAL_ADC_Stop(&hadc1);

    // 2. 读取 Y 轴 (ADC2 - PA1)
    HAL_ADC_Start(&hadc2);
    if (HAL_ADC_PollForConversion(&hadc2, 10) == HAL_OK)
    {
        ADC2_number1 = HAL_ADC_GetValue(&hadc2);
    }
    HAL_ADC_Stop(&hadc2);
}