#ifndef list_h
#define list_h
#include <stdlib.h>
#include <stdio.h>

/*
head is the pointer using in list_add() and list_remove()
*/
extern struct list_element *head;

struct list_element{
	struct list_element *next;
	int data;
};


void list_add(struct list_element *list_head, struct list_element *new_element);

void list_remove(struct list_element *element);



#endif