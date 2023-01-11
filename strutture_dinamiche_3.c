/* Prototipo lista circolare */

#include <stdio.h>
#include <stdlib.h>

struct lista_circolare {
	float val;
	struct lista_circolare *next;
};

typedef struct lista_circolare lista_circolare;

lista_circolare *testa(lista_circolare *p, float v);
lista_circolare *ins_primo_valore(lista_circolare *p, float v);
lista_circolare *ins_valore_succ(lista_circolare *p, float v, lista_circolare *testa);
lista_circolare *cerca_ultimo_nodo(lista_circolare *p, lista_circolare *testa);
void stampa(lista_circolare *p);

int main(){
	lista_circolare *nodo = NULL;
	lista_circolare *primo = NULL;
	nodo = testa(nodo, 1);
	primo = nodo;
	nodo = ins_primo_valore(nodo, 2);
	nodo = ins_valore_succ(nodo, 3, primo);
	nodo = ins_valore_succ(nodo, 4, primo);
	nodo = ins_valore_succ(nodo, 5, primo);
	
	stampa(nodo);
}

lista_circolare *testa(lista_circolare *p, float v){
	lista_circolare *a;
	a = malloc(sizeof(lista_circolare));
	a->val = v;
	a->next = NULL;
	p = a;
	return p;
}

lista_circolare *ins_primo_valore(lista_circolare *p, float v){
	lista_circolare *a;
	a = malloc(sizeof(lista_circolare));
	a->val = v;
	a->next = p;
	p->next = a;
	
	return p;
}

lista_circolare *ins_valore_succ(lista_circolare *p, float v, lista_circolare *testa){
	lista_circolare *a, *coda;
	a = malloc(sizeof(lista_circolare));
	coda = cerca_ultimo_nodo(p, testa);
	a->val = v;
	a->next = p;
	coda->next = a;
	
	return p;
}

lista_circolare *cerca_ultimo_nodo(lista_circolare *p, lista_circolare *testa){
	while(p->next != testa){
		p = p->next;
	}
	return p;
}

void stampa(lista_circolare *p){
	int n = 10;
	while(p!=NULL && n>0){
		printf("%f - %p\n", p->val, p->next);
		p = p->next;
		n--;
	}
}
