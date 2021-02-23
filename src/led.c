#include "led.h"
#include "stdint.h" /*the header file of uint32_t*/

uint32_t *gpfsel4 = 0xFE200010;
uint32_t *gpset1 = 0xFE200020;
uint32_t *gpclr1 = 0xFE20002C;


void led_init()
{
   *gpfsel4 &= ~(0b111<<6);/* set bits 8-6 to 000 and other remains */
   *gpfsel4 |= (0b001<<6);/* set bits 8-6 to 001 and other remains */
}

void led_on()
{
    *gpset1 |= (1<<10);/*Clear GPIO pin n*/
}

void led_off()
{
    *gpclr1 |= (1<<10);/*Clear GPIO pin n*/
}


void delay()
{
	unsigned int n=0x100000;
    while(n)
    {
        n--;
    }
}




















