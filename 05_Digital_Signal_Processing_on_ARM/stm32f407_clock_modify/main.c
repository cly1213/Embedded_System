#include "stm32f4xx_hal.h"
//#include <stdio.h>
//#include <stdint.h>


uint32_t freq;

volatile uint32_t counter;

extern void SystemClock_Config(void);

int main(){
	
	int i;
	
	HAL_Init();
	
	SystemClock_Config();
	
	freq = HAL_RCC_GetHCLKFreq();
	
	while(1){
		
		counter++;
		
		if(counter == 100) counter = 0;
		
		for(i = 0; i<3000; i++){}
	
	}
		
}

void SysTick_Handler(void){
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

