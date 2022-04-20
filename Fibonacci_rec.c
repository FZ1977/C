/*
* Fibonacci con ricorsione.
*/

#include <stdio.h>

int fibonacci(int numero);

void main(){
	int fattoriale;
	fattoriale = fibonacci(6);
	printf("%d\n",fattoriale);
}

int fibonacci(int numero){
	if(numero==0 || numero==1){
		return 1;
	}
	return numero * fibonacci(numero-1);
}
