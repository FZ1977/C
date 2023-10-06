#include <stdio.h>

void somma_uno(int x[], int n){
	int i = 0;
	
	while (i < n ){
		x[i] += 1;
		i ++;
	}
}

void main(){
	int i, a[10]; /* Definito un array. */
	
	i = 0;
	while (i < 10 ){
		a[i] = i*100;
		i ++;
	}
	
	somma_uno(a, 10); /* Questa funzione ha lavorato proprio su x[] */
	
	i = 0;
	while (i < 10 ){
		printf("%d, ", a[i]);
		i ++;
	}
	printf("\n");
}
