#include <stdio.h>

void main(){
	char *b = "Questa e' una stringa"; 
	char a[] = "Questa e' una stringa"; // Dichiaro una stringa
	char *p; // Dichiaro un puntatore di tipo char
	p = a; // Assegno il valore di memoria del primo elemento di a[] a *p

	printf("%c\n", *p); // Stampo il primo carattere
	printf("%s\n", p); // Stampo la stringa
	printf("%s\n", b);

	printf("Size della stringa - %d\n", sizeof(a));
	printf("Size di char - %d\n", sizeof(char));
	printf("Size array - %d\n", sizeof(a)/sizeof(char));
}
