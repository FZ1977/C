/* Programma per scambiare i valori di due variabili */

#include <stdio.h>

void swap(int *ip_a, int *ip_b){
	int temp;
	temp = *ip_a;
	*ip_a = *ip_b;
	*ip_b = temp;
}

void main(){
	int a = 5, b = 10;
	
	printf("%d - %d\n", a, b);
	swap(&a,&b);
	printf("%d - %d\n", a, b);
}
