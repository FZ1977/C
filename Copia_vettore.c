/*Copia vettore*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char *a = "Stringa di caratteri.";
	char *copia_1, *copia_2;
	int len_a = strlen(a);
	int i;
	
	copia_1 = malloc(sizeof(char)*len_a);
	copia_2 = malloc(sizeof(char)*len_a);
	
	for(i=0; a[i]!='\0'; i++){
		copia_1[i]=a[i];
	}
	
	for(i=0; i<len_a; i++){
		copia_2[i]=a[i];
	}
	
	printf("Lunghezza stringa originale %d\n", len_a);
	printf("Lunghezza copia_1 %d\n",(int)strlen(copia_1));
	printf("Lunghezza copia_2 %d\n",(int)strlen(copia_2));
}
