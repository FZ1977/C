/* Uso della funzione malloc */

#include <stdlib.h>
#include <stdio.h>

void main(){
	int *p;
	p = malloc(sizeof(int));
	*p = 12;
	(*p)++;
	printf("p vale %d\n", *p);
}
