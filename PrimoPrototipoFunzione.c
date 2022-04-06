/* Per compilare il file va usata questa sintassi:
 * gcc PrimoPrototipoFunzione.c nepero.c */

#include <stdio.h>

int len( char a[] ); /* prototipo della funzione len( char a[] )*/
float pi(); /* prototipo della funzione pi() */
float nep();

void main(){
	char s[] = "Questo e' un programma C";
	printf(" La stringa e' lunga %d caratteri.\n", len(s));
	printf(" Il valore di pi-greco e' %f.\n", pi());
	printf(" Il valore di e e' %f.\n", nep());
}

int len( char a[] ){
/* Creo una funzione che conta la lunghezza di una stringa. */

	int len = 0;
	
	while ( a[len] != '\0' ){
		len ++; /* len = len + 1 */
	}

	return len;
}

float pi(){
	return 3.14;
}
