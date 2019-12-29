#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdbool.h>

typedef struct node {
 int value;
 struct node* next;
} node ;

int size; // the size of linked list
node* head; // the head of linkedlist

bool insert(int position, int value)
{
	if(position>size||position<0) return false;
	size++;
	int i;
	node* a=head;
	node* b=malloc(sizeof(node));
	if(!position){
		b->next=head;
		b->value=value;
		head=b;
		return true;
	}
	if(position==size-1){
		for(i=1;i<size-1;i++)
			a=a->next;
		a->next=b;
		b->value=value;
		return true;
	}
	for(i=1;i<position;i++){
		a=a->next;
	}
	node *c=a->next;
	b->next=c;
	a->next=b;
	b->value=value;
	return true;
}
// return the value in the given position
int get(int position)
{
	int i;
	node* a=head;
	for(i=1;i<=position;i++){
		a=a->next;
	}
	return a->value;
}

//clear the linkedlist, remember to free the memory you allocated
void clear(){
	node *a=head;
	node *t;
	int i;
	for(i=0;i<size-1;++i){
		t=a;
		a=a->next;
		free(t);
	}
	free(a);
}

#endif