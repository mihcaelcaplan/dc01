/*
 * test_peripherals.c
 *
 *  Created on: May 7, 2025
 *      Author: mcaplan
 */

#include "test_peripherals.h"

void test_RAM(uint32_t baseAddress){

	volatile uint32_t *testAddr = (uint32_t *)baseAddress;
	uint32_t testPattern = 0xA5A5A5A5;

	*testAddr = testPattern;
	if (*testAddr == testPattern) {
		PRINTF("SDRAM test passed!\r\n");
	} else {
		PRINTF("SDRAM test failed: wrote 0x%08X, read 0x%08X\r\n",
			   testPattern, *testAddr);
	}
};
