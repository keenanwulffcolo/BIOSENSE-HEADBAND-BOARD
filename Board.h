/*
 * Copyright (c) 2015-2018, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BOARD_H
#define __BOARD_H

#define Board_CC1350_LAUNCHXL

#ifdef __cplusplus
extern "C" {
#endif

#include "CC1350_LAUNCHXL.h"

#define Board_initGeneral()      CC1350_LAUNCHXL_initGeneral()
#define Board_shutDownExtFlash() CC1350_LAUNCHXL_shutDownExtFlash()
#define Board_wakeUpExtFlash()   CC1350_LAUNCHXL_wakeUpExtFlash()

/* These #defines allow us to reuse TI-RTOS across other device families */
#define Board_ADC0              CC1350_LAUNCHXL_ADC0
#define Board_ADC1              CC1350_LAUNCHXL_ADC1

#define Board_ADCBUF0           CC1350_LAUNCHXL_ADCBUF0
#define Board_ADCBUF0CHANNEL0   CC1350_LAUNCHXL_ADCBUF0CHANNEL0
#define Board_ADCBUF0CHANNEL1   CC1350_LAUNCHXL_ADCBUF0CHANNEL1

#define Board_CRYPTO0           CC1350_LAUNCHXL_CRYPTO0
#define Board_TRNG0             CC1350_LAUNCHXL_TRNG0

#define Board_DIO0              CC1350_LAUNCHXL_DIO0
#define Board_DIO1_RFSW         CC1350_LAUNCHXL_DIO1_RF_SUB1GHZ
#define Board_DIO12             CC1350_LAUNCHXL_DIO12
#define Board_DIO15             CC1350_LAUNCHXL_DIO15
#define Board_DIO16_TDO         CC1350_LAUNCHXL_DIO16_TDO
#define Board_DIO17_TDI         CC1350_LAUNCHXL_DIO17_TDI
#define Board_DIO21             CC1350_LAUNCHXL_DIO21
#define Board_DIO22             CC1350_LAUNCHXL_DIO22
#define Board_DIO30_SWPWR       CC1350_LAUNCHXL_DIO30_RF_POWER

#define Board_DIO23_ANALOG      CC1350_LAUNCHXL_DIO23_ANALOG
#define Board_DIO24_ANALOG      CC1350_LAUNCHXL_DIO24_ANALOG
#define Board_DIO25_ANALOG      CC1350_LAUNCHXL_DIO25_ANALOG
#define Board_DIO26_ANALOG      CC1350_LAUNCHXL_DIO26_ANALOG
#define Board_DIO27_ANALOG      CC1350_LAUNCHXL_DIO27_ANALOG
#define Board_DIO28_ANALOG      CC1350_LAUNCHXL_DIO28_ANALOG
#define Board_DIO29_ANALOG      CC1350_LAUNCHXL_DIO29_ANALOG
#define Board_DIO30_ANALOG      CC1350_LAUNCHXL_DIO30_ANALOG

/*
 *  Board_RF_SUB1GHZ and Board_RF_POWER are the names generated by SysConfig.
 *  Define them here so that RF callback function can reference them.
 */
#define Board_RF_SUB1GHZ        CC1350_LAUNCHXL_DIO1_RF_SUB1GHZ
#define Board_RF_POWER          CC1350_LAUNCHXL_DIO30_RF_POWER

#define Board_GPIO_BUTTON0      CC1350_LAUNCHXL_GPIO_S1
#define Board_GPIO_BUTTON1      CC1350_LAUNCHXL_GPIO_S2
#define Board_GPIO_BTN1         CC1350_LAUNCHXL_GPIO_S1
#define Board_GPIO_BTN2         CC1350_LAUNCHXL_GPIO_S2
#define Board_GPIO_LED0         CC1350_LAUNCHXL_GPIO_LED_RED
#define Board_GPIO_LED1         CC1350_LAUNCHXL_GPIO_LED_GREEN
#define Board_GPIO_RLED         CC1350_LAUNCHXL_GPIO_LED_RED
#define Board_GPIO_GLED         CC1350_LAUNCHXL_GPIO_LED_GREEN
#define Board_GPIO_LED_ON       CC1350_LAUNCHXL_GPIO_LED_ON
#define Board_GPIO_LED_OFF      CC1350_LAUNCHXL_GPIO_LED_OFF

#define Board_GPTIMER0A         CC1350_LAUNCHXL_GPTIMER0A
#define Board_GPTIMER0B         CC1350_LAUNCHXL_GPTIMER0B
#define Board_GPTIMER1A         CC1350_LAUNCHXL_GPTIMER1A
#define Board_GPTIMER1B         CC1350_LAUNCHXL_GPTIMER1B
#define Board_GPTIMER2A         CC1350_LAUNCHXL_GPTIMER2A
#define Board_GPTIMER2B         CC1350_LAUNCHXL_GPTIMER2B
#define Board_GPTIMER3A         CC1350_LAUNCHXL_GPTIMER3A
#define Board_GPTIMER3B         CC1350_LAUNCHXL_GPTIMER3B

#define Board_NVSINTERNAL       CC1350_LAUNCHXL_NVSCC26XX0
#define Board_NVSEXTERNAL       CC1350_LAUNCHXL_NVSSPI25X0

#define Board_I2C0              CC1350_LAUNCHXL_I2C0
#define Board_I2C_TMP           CC1350_LAUNCHXL_I2C0

#define Board_PIN_BUTTON0       CC1350_LAUNCHXL_PIN_BTN1
#define Board_PIN_BUTTON1       CC1350_LAUNCHXL_PIN_BTN2
#define Board_PIN_BTN1          CC1350_LAUNCHXL_PIN_BTN1
#define Board_PIN_BTN2          CC1350_LAUNCHXL_PIN_BTN2
#define Board_PIN_LED0          CC1350_LAUNCHXL_PIN_RLED
#define Board_PIN_LED1          CC1350_LAUNCHXL_PIN_GLED
#define Board_PIN_LED2          CC1350_LAUNCHXL_PIN_RLED
#define Board_PIN_RLED          CC1350_LAUNCHXL_PIN_RLED
#define Board_PIN_GLED          CC1350_LAUNCHXL_PIN_GLED

#define Board_PWM0              CC1350_LAUNCHXL_PWM0
#define Board_PWM1              CC1350_LAUNCHXL_PWM1
#define Board_PWM2              CC1350_LAUNCHXL_PWM2
#define Board_PWM3              CC1350_LAUNCHXL_PWM3
#define Board_PWM4              CC1350_LAUNCHXL_PWM4
#define Board_PWM5              CC1350_LAUNCHXL_PWM5
#define Board_PWM6              CC1350_LAUNCHXL_PWM6
#define Board_PWM7              CC1350_LAUNCHXL_PWM7

#define Board_SD0               CC1350_LAUNCHXL_SDSPI0

#define Board_SPI0              CC1350_LAUNCHXL_SPI0
#define Board_SPI1              CC1350_LAUNCHXL_SPI1
#define Board_SPI_FLASH_CS      CC1350_LAUNCHXL_SPI_FLASH_CS
#define Board_FLASH_CS_ON       (0)
#define Board_FLASH_CS_OFF      (1)

#define Board_SPI_MASTER        CC1350_LAUNCHXL_SPI0
#define Board_SPI_SLAVE         CC1350_LAUNCHXL_SPI0
#define Board_SPI_MASTER_READY  CC1350_LAUNCHXL_SPI_MASTER_READY
#define Board_SPI_SLAVE_READY   CC1350_LAUNCHXL_SPI_SLAVE_READY

#define Board_UART0             CC1350_LAUNCHXL_UART0

#define Board_WATCHDOG0         CC1350_LAUNCHXL_WATCHDOG0

/* Board specific I2C addresses */
#define Board_TMP_ADDR          (0x40)
#define Board_SENSORS_BP_TMP_ADDR Board_TMP_ADDR

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
