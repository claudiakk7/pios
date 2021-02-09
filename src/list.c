
#include "list.h"


/*a new_element is added behind the list_head

if a new element is adding to the front of the list, then list_head = NULL*/

void list_add(struct list_element *list_head, struct list_element *new_element){

	struct list_element *p=NULL;

	if (list_head==NULL)
	{
		new_element->next=head;
		head=new_element;
		return;
	}


	p=head;

	for (;p!=list_head;p=p->next)//looking for the pointer's position
	{
	
	}
	new_element->next=p->next;
	p->next=new_element;
	
}

void list_remove(struct list_element *element){


	struct list_element *p_first=NULL;
	struct list_element *p=NULL;

	p_first=head;
	p=head;

	for (;p!=element;p=p->next)//looking for position
	{
		p_first=p;
	}

	if (p==head)
	{
		head=p->next;
	}
	else{

		p_first->next=p->next;
	}


}
