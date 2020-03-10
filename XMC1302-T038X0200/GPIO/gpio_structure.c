/*
 *
 * Toggling on-board LEDs in sequence at SysTick interval
 *
 *
 */

/*********************************************************************************************************************
 * HEADER FILES
 ********************************************************************************************************************/
#include "xmc_gpio.h"

/*********************************************************************************************************************
  * MACROS
*********************************************************************************************************************/
#define LED0 P0_0
#define LED1 P0_1
#define LED2 P0_6
#define LED3 P0_7
#define LED4 P0_8
#define LED5 P0_9
#define TICKS_PER_SECOND 20

/*********************************************************************************************************************
   DATA STRUCTURES
*********************************************************************************************************************/
/* GPIO LED pin configuration */
XMC_GPIO_CONFIG_t LED_pin_config =
{
  .mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
  .output_level= XMC_GPIO_OUTPUT_LEVEL_LOW//0x10000U
  //.output_level= XMC_GPIO_OUTPUT_LEVEL_HIGH//0x1U
};

/*********************************************************************************************************************
  * LOCAL ROUTINES
*********************************************************************************************************************/
void SysTick_Handler(void)
{
	static uint8_t step = 0;

	/* Toggle LEDs in sequence */
	switch ((step++)%6) {
		case 0:	XMC_GPIO_ToggleOutput(LED0);
				break;
		case 1:	XMC_GPIO_ToggleOutput(LED1);
				break;
		case 2:	XMC_GPIO_ToggleOutput(LED2);
				break;
		case 3:	XMC_GPIO_ToggleOutput(LED3);
				break;
		case 4:	XMC_GPIO_ToggleOutput(LED4);
				break;
		case 5:	XMC_GPIO_ToggleOutput(LED5);
				break;
	}
	if (step==6) step = 0;
}

/*********************************************************************************************************************
  * INITIALIZATION & FUNCTION IMPLEMENTATION
*********************************************************************************************************************/
int main(void)
{
	/* Initialize GPIO */
	XMC_GPIO_Init(LED0, &LED_pin_config);
	XMC_GPIO_Init(LED1, &LED_pin_config);
	XMC_GPIO_Init(LED2, &LED_pin_config);
	XMC_GPIO_Init(LED3, &LED_pin_config);
	XMC_GPIO_Init(LED4, &LED_pin_config);
	XMC_GPIO_Init(LED5, &LED_pin_config);
	/* System timer configuration */
	SysTick_Config(SystemCoreClock / TICKS_PER_SECOND);

	while(1)
	{
	    /* Infinite loop */
	}
	return 0;
}
