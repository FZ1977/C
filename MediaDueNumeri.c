/* Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media aritmetica. */

#include <stdio.h>

void main(){
	int a, b;
	float avg;
	
	printf("Inserisci il primo valore: ");
	scanf("%d", &a);
	
	printf("Inserisci il secondo valore: ");
	scanf("%d", &b);
	
	avg = (float)(a + b)/2;
	
	printf("La media dei due valori e' %f.\n", avg);
}
