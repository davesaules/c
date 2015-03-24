#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 124; i++){ // 100000
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	print_list(l);

	printf("\n");

	printf("La longitud iterativa es: %i\n", len_iter(l));

	printf("La longitud recursiva es: %i\n", len_rec(l,0));

	printf("El elemento maximo de la lista es: %i\n", max(l));

	struct node_struct *inv;
	inv = inversa(l);
	print_list(inv);

	printf("\n");

	struct node_struct * next;

	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}

	return 0;
}
