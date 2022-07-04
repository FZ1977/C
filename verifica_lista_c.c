#include <stdio.h>
#include <stdlib.h>

struct elem {
	char abbr[2];
	char *estesa;
	struct elem *next;
};

typedef struct elem elem; 

int verifica(elem *p, char a[2], char *e);
elem *crea_lista();
elem *primo_nodo(elem *p, char a[2], char *e);
elem *add_nodo(elem *p, char a[2], char *e);

void main(){
	elem *nodo;
	nodo = crea_lista();
	nodo = primo_nodo(nodo, "TO", "TORINO");
	nodo = add_nodo(nodo, "RM", "ROMA");
	nodo = add_nodo(nodo, "MI", "MILANO");
}

elem *crea_lista(){
	elem *p;
	p=malloc(sizeof(elem));
	p->abbr[0] = NULL;
	p->abbr[1] = NULL;
	p->estesa = NULL;
	p->next = NULL;
	
	return p;
}

elem *primo_nodo(elem *p, char a[2], char *e){
	p->abbr[0]=a[0];
	p->abbr[1]=a[1];
	p->estesa=e;
	
	return p;
}

elem *add_nodo(elem *p, char a[2], char *e){
	elem *nodo;
	nodo = malloc(sizeof(elem));
	nodo->abbr[0]=a[0];
	nodo->abbr[1]=a[1];
	nodo->estesa=e;
	nodo->next=p;
	
	return nodo;
}

int verifica(elem *p, char a[2], char *e){
	return 0;
}
