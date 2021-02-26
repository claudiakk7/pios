#include "list.h"
#include "led.h"
#include "delay.h"
#include "rprintf.h"
#include "serial.h"

void clean_bss(void);

void kernel_main() {

	clean_bss();
		
	/*
	struct list_element c={NULL,3};
	struct list_element b={&c,2};
	struct list_element a={&b,1};
	head=&a;
	
	struct list_element d={NULL,8};
	struct list_element e={NULL,16};

	list_add(NULL,&d); //add d to the front of the list
	list_add(&b,&e); // add e behind b


	list_remove(&e);
	*/
	
	led_init();

    while(1){
		
		led_on();
		delay_ms(1000);
		led_off();
		delay_ms(1000);
		esp_printf(put_c, "Current Execution Level is %d\r\n", getEL());
				
    }
	
	
}

/* function used to clean bss */
void clean_bss(void)
{
    extern char __bss_start, __bss_end;
    char *p = &__bss_start;

    for (; p < &__bss_end; p++){
		*p = 0;	
	}
         
}

