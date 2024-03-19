/**
  ******************************************************************************
  * @file     	a4988.h
  * @author		ben
  * @version	1V0
  * @date		Mar 19, 2024
  * @brief		
  */

#ifndef A4988_H_
#define A4988_H_

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Exported defines ----------------------------------------------------------*/

//GPIO controls
#define A4988_MS1_PORT								GPIO_MTR1_MS1_GPIO_Port
#define A4988_MS1_PIN								GPIO_MTR1_MS1_Pin
#define A4988_MS2_PORT								GPIO_MTR1_MS2_GPIO_Port
#define A4988_MS2_PIN								GPIO_MTR1_MS2_Pin
#define A4988_MS3_PORT								GPIO_MTR1_MS3_GPIO_Port
#define A4988_MS3_PIN								GPIO_MTR1_MS3_Pin
#define A4988_NRESET_PORT							GPIO_MTR1_NRESET_GPIO_Port
#define A4988_NRESET_PIN							GPIO_MTR1_NRESET_Pin
#define A4988_DIR_PORT								GPIO_MTR1_DIR_GPIO_Port
#define A4988_DIR_PIN								GPIO_MTR1_DIR_Pin
#define A4988_ENABLE_PORT							GPIO_MTR1_NENABLE_GPIO_Port
#define A4988_ENABLE_PIN							GPIO_MTR1_NENABLE_Pin
#define A4988_NSLEEP_PORT							GPIO_MTR1_NSLEEP_GPIO_Port
#define A4988_NSLEEP_PIN							GPIO_MTR1_NSLEEP_Pin

#define A4988_SETPIN(PORT, PIN)						HAL_GPIO_WritePin(PORT, PIN, GPIO_PIN_SET)
#define A4988_RESETPIN(PORT, PIN)					HAL_GPIO_WritePin(PORT, PIN, GPIO_PIN_RESET)

//STEPSIZE
#define A4988_SET_MICROSTEP_FULLSTEP()				A4988_RESETPIN(A4988_MS1_PORT, A4988_MS1_PIN);\
													A4988_RESETPIN(A4988_MS2_PORT, A4988_MS2_PIN);\
													A4988_RESETPIN(A4988_MS3_PORT, A4988_MS3_PIN)

#define A4988_SET_MICROSTEP_HALFSTEP()				A4988_SETPIN(A4988_MS1_PORT, A4988_MS1_PIN);\
													A4988_RESETPIN(A4988_MS2_PORT, A4988_MS2_PIN);\
													A4988_RESETPIN(A4988_MS3_PORT, A4988_MS3_PIN)

#define A4988_SET_MICROSTEP_QUARTERSTEP()			A4988_RESETPIN(A4988_MS1_PORT, A4988_MS1_PIN);\
													A4988_SETPIN(A4988_MS2_PORT, A4988_MS2_PIN);\
													A4988_RESETPIN(A4988_MS3_PORT, A4988_MS3_PIN)

#define A4988_SET_MICROSTEP_EIGHTHSTEP()			A4988_SETPIN(A4988_MS1_PORT, A4988_MS1_PIN);\
													A4988_SETPIN(A4988_MS2_PORT, A4988_MS2_PIN);\
													A4988_RESETPIN(A4988_MS3_PORT, A4988_MS3_PIN)

#define A4988_SET_MICROSTEP_SIXTEENTHSTEP()			A4988_SETPIN(A4988_MS1_PORT, A4988_MS1_PIN);\
													A4988_SETPIN(A4988_MS2_PORT, A4988_MS2_PIN);\
													A4988_SETPIN(A4988_MS3_PORT, A4988_MS3_PIN)

/*RESET
 * Sets translater to predefined Home state and turns off all the FETs. Steps are ignored under reset.
 */
#define A4988_RESET_ENABLE()						A4988_RESETPIN(A4988_NRESET_PORT, A4988_NRESET_PIN)
#define A4988_RESET_DISABLE()						A4988_SETPIN(A4988_NRESET_PORT, A4988_NRESET_PIN)

/* DIR
 * Sets the direction of rotation. Takes effect on next step rising edge
 */
#define A4988_DIR_1()								A4988_RESETPIN(A4988_DIR_PORT, A4988_DIR_PIN)
#define A4988_DIR_2()								A4988_SETPIN(A4988_DIR_PORT, A4988_DIR_PIN)

/* ENABLE
 * Enables the FET outputs
 */
#define A4988_ENABLE()								A4988_RESETPIN(A4988_ENABLE_PORT, A4988_ENABLE_PIN)
#define A4988_DISABLE()								A4988_SETPIN(A4988_ENABLE_PORT, A4988_ENABLE_PIN)

/* SLEEP
 * Puts the device in low power mode and disables any FETs. Leave 1ms after disabling sleep before stepping.
 */
#define A4988_SLEEP_ENABLE()						A4988_RESETPIN(A4988_NSLEEP_PORT, A4988_NSLEEP_PIN)
#define A4988_SLEEP_DISABLE()						A4988_SETPIN(A4988_NSLEEP_PORT, A4988_NSLEEP_PIN)


/* Exported types ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* A4988_H_ */
