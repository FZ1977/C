/* Lista concatenata */

#include <stdio.h>
#include <stdlib.h>

struct lista_concatenata{
	float valore;
	struct lista_concatenata *prev;
	struct lista_concatenata *next;
};

typedef struct lista_concatenata lista_concatenata;

void main(){
	lista_concatenata e0 = {7, NULL, NULL};
	lista_concatenata e1 = {5, NULL, NULL};
	lista_concatenata e2 = {6, NULL, NULL};
	lista_concatenata *p;
	
	
	e0.next = &e1;
	e1.prev = &e0;
	e1.next = &e2;
	e2.prev = &e1;
	
	p = &e0;
	
	while(p != NULL){
		printf("%f\n", p->valore); /* p puntatore a struct p->val uguale a (*p).val */
		p = p->next;
	}
}
