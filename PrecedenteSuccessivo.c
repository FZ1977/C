/* Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore intero precedente e il successivo. */

#include <stdio.h>

void main(){
	int a, succ, prec;
	
	printf("Inserisci un valore intero: ");
	scanf("%d", &a);
	
	succ = a + 1;
	prec = a - 1;
	
	printf("Il valore inserito e' %d il suo precedente e' %d e il suo successivo e' %d.\n", a, prec, succ);
}
