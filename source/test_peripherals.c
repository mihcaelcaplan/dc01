/*
 * test_peripherals.c
 *
 *  Created on: May 7, 2025
 *      Author: mcaplan
 */

#include "test_peripherals.h"

#define RAMAddress 0x80000000
//#define flashAddress


void testRAM(void){
	testMemory(RAMAddress, "SDRAM");
}

//void testFlash(void){
//	test_memory();
//}

void testMemory(uint32_t baseAddress, char* memName){

	volatile uint32_t *testAddr = (uint32_t *)baseAddress;
	uint32_t testPattern = 0xA5A5A5A5;

	*testAddr = testPattern;
	if (*testAddr == testPattern) {
		PRINTF("%s test passed!\r\n", memName);
	} else {
		PRINTF("%s test failed: wrote 0x%08X, read 0x%08X\r\n",
			   memName, testPattern, *testAddr);
	}
};
