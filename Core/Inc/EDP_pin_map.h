#ifndef _EDP_PIN_MAP_
#define _EDP_PIN_MAP_

#include "stm32wb0x_hal.h"
#include "stm32wb0x_hal_gpio.h"

#define RST_GPIO_Port GPIOB
#define RST_Pin GPIO_PIN_6
#define DC_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_7
#define BUSY_GPIO_Port GPIOB
#define BUSY_Pin GPIO_PIN_14
#define DIN_GPIO_Port GPIOA
#define DIN_Pin GPIO_PIN_11
#define SCK_GPIO_Port GPIOB
#define SCK_Pin GPIO_PIN_3
#define SPI_CS_GPIO_Port GPIOB
#define SPI_CS_Pin GPIO_PIN_15
#define PWR_GPIO_Port GPIOB
#define PWR_Pin GPIO_PIN_5

#endif
