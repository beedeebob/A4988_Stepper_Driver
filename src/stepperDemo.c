/**
  ******************************************************************************
  * @file     	stepperDemo.c
  * @author		ben
  * @version	1V0
  * @date		Mar 19, 2024
  * @brief
  */


/* Includes ------------------------------------------------------------------*/
#include "stepperDemo.h"
#include "a4988.h"
#include "cmsis_os.h"

/* Private define ------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
extern TIM_HandleTypeDef htim2;

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief	Start up the driver
  * @param	None
  * @retval	None
  */
void STP_Startup(void)
{
	A4988_SLEEP_DISABLE();
	A4988_SET_MICROSTEP_SIXTEENTHSTEP();
	A4988_RESET_DISABLE();
	A4988_ENABLE();

	osDelay(1);
}

/*----------------------------------------------------------------------------*/
/**
  * @brief	Set the frequency of the motor
  * @param	None
  * @retval	None
  */
void STP_SetFrequency(uint32_t frequency)
{
	uint32_t autoReload = (1000000 / frequency) - 1;
	LL_TIM_SetAutoReload(TIM2, autoReload);
	LL_TIM_OC_SetCompareCH1(TIM2, (autoReload >> 1));

	LL_TIM_EnableCounter(TIM2);
	TIM2->CCER |= TIM_CCER_CC1E_Msk;
	LL_TIM_EnableAllOutputs(TIM2);
}
