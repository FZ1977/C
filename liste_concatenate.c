/* */

#include <stdio.h>
#include <stdlib.h>

struct list_item{
	float val;
	struct list_item *prev;
	struct list_item *next;
};

typedef struct list_item list_item;

typedef list_item *lista; /* = NULL per lista vuota */

lista list_in0(lista, float);
lista list_in1(lista, float);
lista list_in(lista, int, float);
lista list_append(lista, float);
void list_print(lista);
list_item *list_search(lista, int);

void main(){
	lista a = NULL, b = NULL, c = NULL, d = NULL, f = NULL;
	int i, n = 12;
	list_item *p, *u;
	
	for(i = 0; i<n; i++){
		a = list_in0(a, i);
	}
	printf("\n");
	printf("Stampa lista a\n");
	list_print(a);
	
	p=list_search(a,4);
	if(p != NULL){
		printf("\n");
		printf("Stampa valore del list_search\n");
		printf("%f\n", p->val);
	}
	a = list_in1(a, 100);
	printf("\n");
	printf("Stampa lista a\n");
	list_print(a);
	
	f = list_in0(f, 400);
	printf("\n");
	printf("Stampa lista f\n");
	list_print(f);
	
	b = list_in0(b, 200);
	b = list_in1(b, 210);
	b = list_in(b, 2, 250);
	b = list_in(b, 1, 300);
	b = list_in(b, 0, 0);
	printf("\n");
	printf("Stampa lista b\n");
	list_print(b);
	
	for(i=0; i<n; i++){
		c=list_append(c,100+i);
	}
	printf("\n");
	printf("Stampa lista c\n");
	list_print(c);
	
	for(i=0; i<n; i++){
		if(i==0){
			d = list_in0(d,200+i);
			u = d;
		} else {
			d = list_in1(u, 200+i);
			u = u->next;
		}
	}
	printf("\n");
	printf("Stampa lista d\n");
	list_print(d);
}

lista list_in0(lista a, float v){
	list_item *p = malloc(sizeof(list_item));
	
	if(p==NULL){
		return a;
	}
	
	p->val = v;
	p->prev = NULL;
	p->next = a;
	if(a != NULL){
		a->prev = p;
	}
	
	return p;
}

void list_print(lista a){
	list_item *p = a;
	
	printf("============\n");
	for(; p!= NULL; p = p->next){
		printf("%f\n",p->val);
	}
}

list_item *list_search(lista a, int pos){
	list_item *p = a;
	
	if(pos<0){
		return NULL;
	}
	
	while ( pos>0 && p != NULL ){
		p = p->next;
		pos--;
	}
	
	return p;
}

lista list_in1(lista a, float v){
	list_item *p = malloc(sizeof(list_item));
	
	if(p==NULL){
		return a;
	}
	
	p->val = v;
	p->prev = a;
	p->next = a->next;
	
	if(a->next!=NULL){
		a->next->prev = p;
	}
	a->next = p;
	
	return a;
}

lista list_in(lista a, int pos, float v){
	lista p;
	
	if(pos==0){
		return list_in0(a, v);
	}
	
	p = list_search(a, pos-1);
	
	if(p == NULL){
		return a;
	}
	
	a = list_in1(p, v);
	
	return a;
}

lista list_append(lista a, float v){
	lista p = a;
	
	if(p == NULL){
		return list_in0(a, v);
	}
	
	while(p->next != NULL){
		p = p->next;
	}
	
	p = list_in1(p, v);
	
	return a;
}
