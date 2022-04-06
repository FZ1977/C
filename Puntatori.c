/* Puntatori, array e variabili.*/

#include <stdio.h>

void main(){
	int a = 10; /* dichiaro la variabile */
	int b[] = {0, 1, 2, 3, 4}; /* dichiaro array */
	int *pi; /* dichiaro variabile puntatore pi */
	
	printf("Nome variabile: a\n");
	printf("Tipo variabile: int\n");
	printf("Valore variabile: %d\n", a);
	printf("Indirizzo memoria: %p\n", &a);
	
	pi = &a; /* Assegno al puntatore l'indirizzo di memoria di a */
	printf("---------------------------\n");
	printf("Valore di memoria di pi: %p\n", pi);
	printf("Valore contenuto in %p - %d\n", pi, *pi);
	
	*pi = 5;
	printf("Valore di a: %d\n", a);
}
