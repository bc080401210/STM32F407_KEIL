
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_conf.h"


void LED_Init(void);

int main()
{
	uint32_t i;
	HAL_Init();
	LED_Init();

	while(1)
	{
		//Toggle Led
		
		HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15);
		
		//Wait for some time
		for(i=0;i<4000000;i++);
	
	
	}

}


void LED_Init(void)
{
	GPIO_InitTypeDef Led_init;

	__HAL_RCC_GPIOD_CLK_ENABLE();

	
	Led_init.Pin = GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
	Led_init.Mode = GPIO_MODE_OUTPUT_PP;
	Led_init.Pull = GPIO_NOPULL;
	Led_init.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOD,&Led_init);

}
