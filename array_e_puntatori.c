/*
 * Questo programma serve solamente per capire come funzionano
 * gli array e i puntatori in C.
 * Il codice in rosso e' stato commentato per fare una seconda prova
 * utilizzando il riferimento all'array tramite puntatore.
 * 
 * */

#include <stdio.h>


#define C 10000000
void print_array_int(int *x, int n){
	int i;
	
	//printf("Numero di byte di x: %ld\n", sizeof(x));
	
	for(i = 0; i < n; i++ ){
		//printf("%d, ", x[i]);
		printf("%d, ", *(x+i));
	}	
	printf("\n");
}

void main(){
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; /* Altro modo per definire un array */
	/* int b[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19}; */
	int *p = a;
	int n = sizeof(a)/sizeof(int);
	
	float e = 2.71;
	
	printf("Valore di p: %d\n", p);
	
	print_array_int(p, n); /* oppure print_array_int(a, n) */
	
	/*
	int *p;
	int n;
	
	printf("Numero di byte di a: %ld\n", sizeof(a));
	printf("Numero di byte di int: %ld\n", sizeof(int));
	
	n = sizeof(a)/sizeof(int);
	
	print_array_int(a, n);
	
	p = a;
	
	print_array_int(p, n);
	
	p = b;
	
	print_array_int(p,n);
	
	printf("Questo e' il valore della costante C %d\n", C);
	*/
	
	printf("%p\n", &e); // Valore di memoria della variabile e
	
	p = &e;
	
	printf("%f\n", *p);
}
