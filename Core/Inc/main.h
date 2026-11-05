/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32wb0x_hal.h"

#include "stm32wb0x_nucleo.h"

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
#define SPI3_SCK_Pin GPIO_PIN_3
#define SPI3_SCK_GPIO_Port GPIOB
#define SPI3_MISO_Pin GPIO_PIN_8
#define SPI3_MISO_GPIO_Port GPIOA
#define SPI3_NSS_Pin GPIO_PIN_9
#define SPI3_NSS_GPIO_Port GPIOA
#define SPI3_MOSI_Pin GPIO_PIN_11
#define SPI3_MOSI_GPIO_Port GPIOA
#define SPI_CS_Pin GPIO_PIN_15
#define SPI_CS_GPIO_Port GPIOB
#define BUSY_Pin GPIO_PIN_14
#define BUSY_GPIO_Port GPIOB
#define OSC32_IN_Pin GPIO_PIN_13
#define OSC32_IN_GPIO_Port GPIOB
#define OSC32_OUT_Pin GPIO_PIN_12
#define OSC32_OUT_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_7
#define DC_GPIO_Port GPIOB
#define RST_Pin GPIO_PIN_6
#define RST_GPIO_Port GPIOB
#define PWR_Pin GPIO_PIN_5
#define PWR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
