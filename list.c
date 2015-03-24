#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

void deleteNode(struct node_struct *n){
	free(n);
}

void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
}

int len_iter(struct node_struct *l){
	int contador = 0;
	while(l != NULL){
		l = l-> next;
		contador++;
	}
	return contador;
}

int len_rec(struct node_struct *l, int i){
	if(l ==  NULL)
		return i;
	return len_rec(l->next, i+1);
}

int max(struct node_struct *l){
	int i, max = 0;

	for(i = 0; l != NULL; i++){
		if(l->value > max)
			max = l->value;
		l = l->next;
	}
	return max;
}

struct node_struct* inversa(struct node_struct *l){
	struct node_struct* inv = NULL;
	for(; l != NULL; l = l->next){
		struct node_struct* nuevo;
		nuevo = newNode(l->value);
		nuevo-> next= inv;
		inv = nuevo;
	}
	return inv;
}
