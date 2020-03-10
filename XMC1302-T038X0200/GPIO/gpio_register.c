/*
 *
 * Toggling on-board LEDs in sequence at interval
 *
 *
 */
/*********************************************************************************************************************
 * HEADER FILES
 ********************************************************************************************************************/
#include <xmc_common.h>
#include "xmc_scu.h"

void pause (void);

/*********************************************************************************************************************
   DATA STRUCTURES
*********************************************************************************************************************/
 XMC_SCU_CLOCK_CONFIG_t clock_config =
{
  .fdiv = 0,
  .idiv = 5
};

/*********************************************************************************************************************
  * INITIALIZATION & FUNCTION IMPLEMENTATION
*********************************************************************************************************************/
int main(void)
{

    XMC_SCU_CLOCK_Init(&clock_config);
	PORT0->IOCR0 &= ~PORT0_IOCR0_PC0_Msk;
	PORT0->IOCR0 |= 0x10 << PORT0_IOCR0_PC0_Pos;//set for Push-pull mode

	PORT0->IOCR0 &= ~PORT0_IOCR0_PC1_Msk;
	PORT0->IOCR0 |= 0x10 << PORT0_IOCR0_PC1_Pos;

	PORT0->IOCR4 &= ~PORT0_IOCR4_PC6_Msk;
	PORT0->IOCR4 |= 0x10 << PORT0_IOCR4_PC6_Pos;

	PORT0->IOCR4 &= ~PORT0_IOCR4_PC7_Msk;
	PORT0->IOCR4 |= 0x10 << PORT0_IOCR4_PC7_Pos;

	PORT0->IOCR8 &= ~PORT0_IOCR8_PC8_Msk;
	PORT0->IOCR8 |= 0x10 << PORT0_IOCR8_PC8_Pos;

	PORT0->IOCR8 &= ~PORT0_IOCR8_PC9_Msk;
	PORT0->IOCR8 |= 0x10 << PORT0_IOCR8_PC9_Pos;


	PORT0->OMR = PORT0_OMR_PS0_Msk ;//set
	PORT0->OMR = PORT0_OMR_PS1_Msk ;//set
	PORT0->OMR = PORT0_OMR_PS6_Msk ;//set
	PORT0->OMR = PORT0_OMR_PS7_Msk ;//set
	PORT0->OMR = PORT0_OMR_PS8_Msk ;//set
	PORT0->OMR = PORT0_OMR_PS9_Msk ;//set
	//PORT0->OMR = PORT0_OMR_PR0_Msk ;//reset


  while(1)
  {
	    PORT0->OUT = 0x3C3;//
		pause();
		PORT0->OUT = 0x0;//
		pause();
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

