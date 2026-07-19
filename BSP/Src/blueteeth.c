#include "blueteeth.h"
#include "usart.h"

void send_test(void)
{
    HAL_UART_Transmit(&huart1, (uint8_t *)"test", 4, 100);
}
