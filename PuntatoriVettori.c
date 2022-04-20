/*
 * Verifiche per capire come funzionano i puntatori a vettori.
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

void main(){
	char *a;
	char b[]="Questa e' una stringa.";
	int len=sizeof(b)/sizeof(char);
	
	a = malloc(sizeof(char)*sizeof(b));
	
	for(int i=0;i<len;i++){
		a[i]=b[i];
	}
	
	for(int x=0;x<len;x++){
		printf("%c", a[x]);
	}
}
