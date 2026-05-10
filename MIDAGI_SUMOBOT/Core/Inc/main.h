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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KY2_SIG_Pin GPIO_PIN_13
#define KY2_SIG_GPIO_Port GPIOC
#define KY3_SIG_Pin GPIO_PIN_14
#define KY3_SIG_GPIO_Port GPIOC
#define BUZZ_SIG_Pin GPIO_PIN_15
#define BUZZ_SIG_GPIO_Port GPIOC
#define SYS_CURR_Pin GPIO_PIN_0
#define SYS_CURR_GPIO_Port GPIOA
#define REG_RED_Pin GPIO_PIN_1
#define REG_RED_GPIO_Port GPIOA
#define REG_GREEN_Pin GPIO_PIN_2
#define REG_GREEN_GPIO_Port GPIOA
#define REG_BLUE_Pin GPIO_PIN_3
#define REG_BLUE_GPIO_Port GPIOA
#define SH1_SIG_Pin GPIO_PIN_4
#define SH1_SIG_GPIO_Port GPIOA
#define SH2_SIG_Pin GPIO_PIN_5
#define SH2_SIG_GPIO_Port GPIOA
#define IR3_SIG_Pin GPIO_PIN_6
#define IR3_SIG_GPIO_Port GPIOA
#define IR4_SIG_Pin GPIO_PIN_7
#define IR4_SIG_GPIO_Port GPIOA
#define SH3_SIG_Pin GPIO_PIN_0
#define SH3_SIG_GPIO_Port GPIOB
#define BAT_VOL_Pin GPIO_PIN_1
#define BAT_VOL_GPIO_Port GPIOB
#define BTN_MODE_Pin GPIO_PIN_2
#define BTN_MODE_GPIO_Port GPIOB
#define WIFI_RX_Pin GPIO_PIN_10
#define WIFI_RX_GPIO_Port GPIOB
#define WIFI_TX_Pin GPIO_PIN_11
#define WIFI_TX_GPIO_Port GPIOB
#define PH_IN1_Pin GPIO_PIN_12
#define PH_IN1_GPIO_Port GPIOB
#define PH_IN2_Pin GPIO_PIN_13
#define PH_IN2_GPIO_Port GPIOB
#define PH_IN3_Pin GPIO_PIN_14
#define PH_IN3_GPIO_Port GPIOB
#define PH_IN4_Pin GPIO_PIN_15
#define PH_IN4_GPIO_Port GPIOB
#define SER1_SIG_Pin GPIO_PIN_8
#define SER1_SIG_GPIO_Port GPIOA
#define BT_RX_Pin GPIO_PIN_9
#define BT_RX_GPIO_Port GPIOA
#define BT_TX_Pin GPIO_PIN_10
#define BT_TX_GPIO_Port GPIOA
#define SER2_SIG_Pin GPIO_PIN_11
#define SER2_SIG_GPIO_Port GPIOA
#define US_ECHO_Pin GPIO_PIN_12
#define US_ECHO_GPIO_Port GPIOA
#define US_TRIG_Pin GPIO_PIN_15
#define US_TRIG_GPIO_Port GPIOA
#define KY1_SIG_Pin GPIO_PIN_3
#define KY1_SIG_GPIO_Port GPIOB
#define IR2_SIG_Pin GPIO_PIN_4
#define IR2_SIG_GPIO_Port GPIOB
#define IR1_SIG_Pin GPIO_PIN_5
#define IR1_SIG_GPIO_Port GPIOB
#define OLED_SCL_Pin GPIO_PIN_6
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_7
#define OLED_SDA_GPIO_Port GPIOB
#define PH_ENA_Pin GPIO_PIN_8
#define PH_ENA_GPIO_Port GPIOB
#define PH_ENB_Pin GPIO_PIN_9
#define PH_ENB_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
