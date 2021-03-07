#include "main.h"


extern "C"
int Main()
{
    while(1)
    {
        HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
        HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
        HAL_Delay(500);
    }
}
