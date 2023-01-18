#include <stdio.h>
#include <stdlib.h>

void stampa(int *p);

void main(){
	int *p, *p_init;
	int valore;
	
	p = malloc(sizeof(int)*1000);
	p_init = p;
	
	while(valore != 0){
		printf("Inserisci un valore: ");
		scanf("%d", &valore);
		printf("");
		*p = valore;
		p++;
	}
	
	stampa(p_init);
}

void stampa(int *p){
	while(*p != '0000'){
		printf("%d\n", *p);
		p++;
	}
}