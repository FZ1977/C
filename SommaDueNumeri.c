/* Si  scriva  un  programma  in  linguaggio  C  che  legga  due  valori  interi  e  visualizzi  la  loro somma. */

#include <stdio.h>

void main(){
	float numero1, numero2, somma = 0;
	
	printf("Inserisci il primo numero: ");
	scanf("%f", &numero1);
	printf("\n");
	printf("Inserisci il secondo  numero: ");
	scanf("%f", &numero2);
	printf("\n");

	somma = numero1 + numero2;
		
	printf("La somma dei due numeri e': %f", somma);
}
