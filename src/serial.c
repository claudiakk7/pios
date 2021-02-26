#include "serial.h"




/*the return value is changed to int, otherwise esp_printf will be wrong*/

int put_c(int data){
	
	unsigned long *MU_IO =0xFE215004;
	
	*MU_IO=data;
	
	return 0;

		
}

unsigned int getEL(){
	
	unsigned int el;
	asm("mrs %0,CurrentEL"
	: "=r"(el)
	:
	:);
	
	return el;
	
}