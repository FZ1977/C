#include <stdio.h>

void main(){
	int x = 2;
	float y = x + 6.1;
	x = y + 0.5;
	/* x = (int)(y + 0.5); casting */
	printf("%d\n",x);
	
	if ( x < 10 ) {
		printf("x e' minore di 10\n");
	} else {
		printf("x non e' minore di 10\n");
	}
	
	/* oppure */
	
	if ( x < 10 && y >= 8) { /* and */
		/* TODO */
	}
	
	if ( x < 10 || y >= 8) { /* or */
		/* TODO */
	}
	
	if ( !(x < 10) ) { /* not */
		/* TODO */
	}
	
	int a = 21, b = 2, c;
	float d;
	
	c = a/b;
	d = a/b; /* Qui il risultato sara sempre uguale a 10 operazione tra interi */
	/* d = (float)a/b; Qui invece facciamo il casting di a e il risultato sarà 10.50000 */
	/* d = a/(b + 0.0); Qui invece forziamo per ottenere il risultato sarà 10.50000 */
	/* d = 1.0*a/b; Anche qui il risultato sarà 10.50000 */
	
	printf("Il valore di c e' %d\n",c);
	printf("Il valore di d e' %f\n",d);
}
