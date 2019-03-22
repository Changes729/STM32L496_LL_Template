/**
  ******************************************************************************
  * @file    系统main函数的头文件
  * @author  Sunon 设计中心研究部
  * @brief   
  ******************************************************************************
  * @attention 
  * 《工程文件层级图》
  *   (主逻辑函数)             (公有接口函数)  (模块函数)       (库函数)
  *   Main.c <----------- Main.h <--------o-- Servo.c     <--| STM32
  *                        ↑↑↑↑           !-- Buttom.c    <--| Low
  *     (公有服务函数) stm32l4xx_it.h      !-- BlingLED.c  <--| Level
  *                        ↑↑↑↑           !-- BthSerial.c <--| Library
  *   _it.c <---------- driver_it.h <-----o
  *   (中断逻辑函数)           (私有服务函数)          
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include "stm32l4xx_it.h"
#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/*-- xxx xxx --*/
void Init_xxx();
void DeInit_xxx();


#endif /* __MAIN_H */

