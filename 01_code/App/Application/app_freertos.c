#include "main.h"

void ledTaskFunction(void const * argument)
{
  /* USER CODE BEGIN ledTaskFunction */
  /* Infinite loop */
  for(;;)
  {
	  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_PIN);
	  osDelay(1000);
  }
  /* USER CODE END ledTaskFunction */
}
