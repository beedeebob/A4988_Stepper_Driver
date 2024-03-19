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
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief	
  * @param	
  * @retval	
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
  * @brief	
  * @param	
  * @retval	
  */
