#include "list.h"

void clean_bss(void);

void kernel_main() {

	clean_bss();
		
	struct list_element c={NULL,3};
	struct list_element b={&c,2};
	struct list_element a={&b,1};
	head=&a;
	
	struct list_element d={NULL,8};
	struct list_element e={NULL,16};

	list_add(NULL,&d);
	list_add(&b,&e);
	struct list_element *t=NULL;

	list_remove(&e);

    while(1){
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

