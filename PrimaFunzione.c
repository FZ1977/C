#include <stdio.h>

int len( char a[] ){
/* Creo una funzione che conta la lunghezza di una stringa. */

	int len = 0;
	
	while ( a[len] != '\0' ){
		len ++; /* len = len + 1 */
	}

	return len;
}

void main() {
	char s[] = "Programma C";
	printf(" La stringa e' lunga %d caratteri.\n", len(s));
}
