/**
  ******************************************************************************
  * @file    Driver Interrupt function . head 
  * @author  Asuki.
  * @date    21-3-2019
  * @brief   
  ******************************************************************************
  * @attention
  *    !!! 该文件不应该被Main.h引用 !!!
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef DRIVER_INTERRUPT_H
#define DRIVER_INTERRUPT_H

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_ll_bus.h"
#include "stm32l4xx_ll_rcc.h"
#include "stm32l4xx_ll_bus.h"
#include "stm32l4xx_ll_rcc.h"
#include "stm32l4xx_ll_pwr.h"
#include "stm32l4xx_ll_system.h"
#include "stm32l4xx_ll_utils.h"
#include "stm32l4xx_ll_gpio.h"
#include "stm32l4xx_ll_exti.h"
#include "stm32l4xx_ll_usart.h"
#include "stm32l4xx_ll_tim.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/ 
/* Exported functions ------------------------------------------------------- */
/*-- xxx服务函数 --*/
void xxx_Callback();
void xxx_ErrorCall();

#endif /* DRIVER_INTERRUPT_H */
