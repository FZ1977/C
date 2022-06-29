#include <stdio.h>
#include <stdlib.h>
#include "CognomeNome.c"

array_int posizione_vocali(char *s);

int main(int argc, char **argv){
	char *s="Algoritmi";
	
	array_int r=posizione_vocali(s);

	printf("x.n = %d\n",r.n);
	printf("x.a = ");
	for(int i=0;i<r.n;i++){
		printf("%d ",r.a[i]);
	}
	printf("\n");
}
