/*
Programma che calcola la radice quadrata di un numero.
Questa la formula da usare: g = 0.5*(g+g/x)
*/
#include <stdio.h>

main(){
	float x, g, e;
	x = 2.0; /* Numero per cui calcolare la radice */
	g = x; /* radice del numero n */
	e = 0.000000001; /* errore di approssimazione */
	
	//printf("%f\n",r);
	while (g*g - x > e){
		g = (g + x/g)/2; // formula per il calcolo della radice
		printf("Valore g: %.10f\n", g); 
	}

	printf("Valore della radice quadrata di %f e' %f", x, g);
}
