#include <string>
#include "main.h"

extern UART_HandleTypeDef huart2;
extern "C"
int Main()
{
    uint16_t nazwa = 0;
    char tab[30];
    uint8_t len;
    while(1)
    {
        HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
        HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
        HAL_Delay(500);
        len = sprintf(tab, "%d\n", nazwa);
        HAL_UART_Transmit(&huart2, (uint8_t *) tab, len, 10);
        nazwa ++;
    }
}
