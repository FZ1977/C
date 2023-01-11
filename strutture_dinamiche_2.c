/* Strutture dinamiche 2 */

#include <stdio.h>
#include <stdlib.h>

/* Creo una struttura per realizzare una lista dinamica unidirezionale */
struct lista{
	float val;
	struct lista *next;
};

typedef struct lista nodo;/* definisco un alias per la mia struttura */

void stampa(nodo *p);
nodo *testa(nodo *p);
nodo *nuovo_elemento(nodo *p, float v);
nodo *ricerca(nodo *p, int pos);
nodo *cancella_elemento(nodo *p, int pos);


void main(){
	nodo *elemento = NULL;
	
	elemento = testa(elemento); /* definisco la testa della lista */
	
	for(int i=0; i<10; i++){
		elemento = nuovo_elemento(elemento,i); /* aggiungo gli elementi in testa alla lista */
	}
	
	stampa(elemento);
	
	elemento = ricerca(elemento, 4);
	stampa(elemento);
}

nodo *testa(nodo *p){
	p = malloc(sizeof(nodo));
	p = NULL;
	
	return p;
}

nodo *nuovo_elemento(nodo *p, float v){
	nodo *elemento;
	elemento = malloc(sizeof(nodo));
	
	elemento->val = v;
	elemento->next = p;
	
	p = elemento;
	
	return p;
}

nodo *ricerca(nodo *p, int pos){
	/* visualizza gli elementi dalla posizione richiesta */
	while(p!=NULL && pos>0){
		p = p->next;
		pos--;
	}
	
	return p;
}

void stampa(nodo *p){
	printf("=================\n");
	while(p!=NULL){
		//printf("|%f| -> ", p->val);
		printf("valore: %f - next: %p\n", p->val, p->next);
		p = p->next;
	}
}
