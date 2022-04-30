/*
 * Primo programma con i vettori di puntatori.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *cat_intstr(char *a, int n);

void main(){
	char *riga[5];
	char *temp;
	int i;
	
	riga[0]="Riga 1";
	riga[1]="Riga 2";
	riga[2]="Riga 3";
	riga[3]="Riga 4";
	riga[4]="Riga 5";
	
	for(i=0; i<5; i++){
		printf("%s\n",riga[i]);
	}
	
	temp=riga[0];
	riga[0]=riga[4];
	riga[4]=temp;
	
	printf("\n");
	
	for(i=0; i<5; i++){
		printf("%s\n",riga[i]);
	}
}

/*
char *cat_intstr(char *a, int n){
	char *stringa;
	char numero;
	numero=(char)n;
	int i=0;
	int len;
	
	len=sizeof(a)/sizeof(char);
	stringa=malloc(sizeof(char)*len+4);
	
	for(i=0;i<100;i++){
		stringa[i]=a[i];
	}
	
	//printf("%s\n",stringa);
	
	return *stringa;
}
*/
