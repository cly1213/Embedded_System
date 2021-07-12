/*
 * stm32f407xx.h
 *
 *  Created on: Jul 12, 2021
 *      Author: leo
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/*
 * base addressed of flash and sram memories
 */

#define FLASH_BASEADDR							0x08000000U
#define SRAM1_BASEADDR							0x02000000U //112KB
#define SRAM2_BASEADDR							0x02001C00U
#define ROM_BASEADDR							0x1FFF0000U
#define SRAM1					        		SRAM1_BASEADDR

/*
 * AHBx and APBx Bus Peripheral base addresses
 */

#define PERIPH_BASEADDR 						0x40000000U
#define APB1PERIPH_BASEADDR						PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR						0x40010000U
#define AHB1PERIPH_BASEADDR						0x40020000U
#define AHB2PERIPH_BASEADDR						0x50000000U

#endif /* INC_STM32F407XX_H_ */
