#include "delay.h"


/*ms represents the millisecond delay*/
void delay_ms(unsigned int ms){
	
	unsigned long now=get_timer_count();
	
	while((get_timer_count()-now)<ms*1000);
	
}
	
	



unsigned long get_timer_count() {
	unsigned long *timer_count_register =0x3f003004 ;
	return *timer_count_register ;
}