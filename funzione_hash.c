/* Funzione hash */

#include <stdio.h>

void main(){
	char *a = "Stringa";
	int x=0, i;
	
	printf("Tabella Hash\n");
	for(int j=0; j<128; j++){
		printf("%c - %d\n", j, j);
	}
	
	printf("Funzione Hash\n");
	for(i=0; a[i] != '\0'; i++){
		x = x^a[i];
		printf("%d - %d\n",x, a[i]);
	}
	
	printf("%d\n", x%10);
}
