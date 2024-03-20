/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

#include "stm32f3xx_ll_tim.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_gpio.h"
#include "stm32f3xx_ll_dma.h"

#include "stm32f3xx_ll_exti.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPIO_MTR1_MS1_Pin GPIO_PIN_1
#define GPIO_MTR1_MS1_GPIO_Port GPIOA
#define GPIO_MTR1_MS2_Pin GPIO_PIN_2
#define GPIO_MTR1_MS2_GPIO_Port GPIOA
#define GPIO_MTR1_MS3_Pin GPIO_PIN_3
#define GPIO_MTR1_MS3_GPIO_Port GPIOA
#define GPIO_MTR1_DIR_Pin GPIO_PIN_4
#define GPIO_MTR1_DIR_GPIO_Port GPIOA
#define GPIO_MTR1_NRESET_Pin GPIO_PIN_5
#define GPIO_MTR1_NRESET_GPIO_Port GPIOA
#define GPIO_MTR1_NENABLE_Pin GPIO_PIN_6
#define GPIO_MTR1_NENABLE_GPIO_Port GPIOA
#define GPIO_MTR1_NSLEEP_Pin GPIO_PIN_7
#define GPIO_MTR1_NSLEEP_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
