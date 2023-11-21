/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Ped_button_Pin GPIO_PIN_0
#define Ped_button_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_1
#define Button1_GPIO_Port GPIOA
#define Button2_Pin GPIO_PIN_4
#define Button2_GPIO_Port GPIOA
#define Ped_buzzer_Pin GPIO_PIN_6
#define Ped_buzzer_GPIO_Port GPIOA
#define Button3_Pin GPIO_PIN_0
#define Button3_GPIO_Port GPIOB
#define Ped_Green_Pin GPIO_PIN_10
#define Ped_Green_GPIO_Port GPIOB
#define Ped_Red_Pin GPIO_PIN_8
#define Ped_Red_GPIO_Port GPIOA
#define Sys1_Red_Pin GPIO_PIN_10
#define Sys1_Red_GPIO_Port GPIOA
#define Sys1_Green_Pin GPIO_PIN_3
#define Sys1_Green_GPIO_Port GPIOB
#define Sys2_Red_Pin GPIO_PIN_4
#define Sys2_Red_GPIO_Port GPIOB
#define Sys_Green_Pin GPIO_PIN_5
#define Sys_Green_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
