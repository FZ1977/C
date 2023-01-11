/* qualche prova con le strutture autoreferenziate */

#include <stdio.h>
#include <stdlib.h>

struct lista{
	int val;
	struct lista *prev;
	struct lista *next;
};

typedef struct lista lista;

struct init_lista(int  valore, char *variabile[]);

void main(){
	char *lista_var[] = {'l1', 'l2', 'l3', 'l4', 'l5'};
	int i;
	lista *p;
	int len = sizeof(lista_var)/sizeof(char);
	p = malloc(sizeof(lista));
	
	for(i = 0; i<len; i++){
		/*
		lista lista_var[i] = {i, NULL, NULL};
		if(i == 1){
			lista_var[i].next = &lista_var[i-1];
		}
		*/
	}
	
	//p=&l1;
	
	printf("\tprev\t\t-\tval\t-\tnext\n");
	while(p != NULL){
		printf("\t%p\t-\t%d\t-\t%p\n",p->prev, p->val, p->next);
		p=p->next;
	}
}

struct init_lista(int valore, char *variabile[]){
	lista variabile = {valore, NULL, NULL};
	return variabile;
}

