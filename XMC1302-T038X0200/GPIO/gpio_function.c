/*
 *
 * Toggling on-board LEDs in sequence at interval
 *
 *
 */
/*********************************************************************************************************************
 * HEADER FILES
 ********************************************************************************************************************/
#include <xmc_gpio.h>
/*********************************************************************************************************************
  * INITIALIZATION & FUNCTION IMPLEMENTATION
*********************************************************************************************************************/
void pause (void);
int main(void)
{
/**************************************************************************/
  XMC_GPIO_SetMode(XMC_GPIO_PORT0, 0, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
  XMC_GPIO_SetMode(XMC_GPIO_PORT0, 1, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
  XMC_GPIO_SetMode(P0_6, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
  XMC_GPIO_SetMode(P0_7, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
  XMC_GPIO_SetMode(P0_8, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
  XMC_GPIO_SetMode(P0_9, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
/**************************************************************************/
  XMC_GPIO_SetOutputLow (XMC_GPIO_PORT0, 0);
  XMC_GPIO_SetOutputLow (XMC_GPIO_PORT0, 1);
  XMC_GPIO_SetOutputLow (P0_6);
  XMC_GPIO_SetOutputLow (P0_7);
  XMC_GPIO_SetOutputLow (P0_8);
  XMC_GPIO_SetOutputLow (P0_9);
/**************************************************************************/

  while(1)
  {
		static uint8_t step = 0;

		/* Toggle LEDs in sequence */
		switch ((step++)%6) {
			case 0:	XMC_GPIO_ToggleOutput(XMC_GPIO_PORT0, 0);
					break;
			case 1:	XMC_GPIO_ToggleOutput(XMC_GPIO_PORT0, 1);
					break;
			case 2:	XMC_GPIO_ToggleOutput(P0_6);
					break;
			case 3:	XMC_GPIO_ToggleOutput(P0_7);
					break;
			case 4:	XMC_GPIO_ToggleOutput(P0_8);
					break;
			case 5:	XMC_GPIO_ToggleOutput(P0_9);
					break;
		}
		if (step==6) step = 0;
		 pause ();
  }
}
void pause (void)
{
    volatile uint32_t i = 0;
    for (i = 0; i < 800000; ++i)
    {
        __asm("NOP"); //delay
    }
}
