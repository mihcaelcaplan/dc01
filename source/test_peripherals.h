/*
 * test.h
 *
 *  Created on: May 7, 2025
 *      Author: mcaplan
 */

#ifndef TEST_PERIPHERALS_H_
#define TEST_PERIPHERALS_H_

//#include "stdint.h"
#include "fsl_debug_console.h"

void testRAM(void);
void testFlash(void);

void testMemory(uint32_t baseAddress, char* memName);



#endif /* TEST_PERIPHERALS_H_ */
