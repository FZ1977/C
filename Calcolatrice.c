/* 
Si scriva un programma in linguaggio C capace di compiere le 4 operazioni 
(somma, sottrazione, moltiplicazione e divisione) tra due numeri reali 
inseriti da tastiera. Dopo che sonostati inseriti i due numeri, detti A e B, il 
programma dovrà  visualizzare i quattro valoriA+B, A-B, A*B, A/B. 
Si ipotizzi che sia B sia diverso da 0. 
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	float a, b, somma, sottrazione, moltiplicazione, divisione;
	
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	
	if(b == 0 || a < b){
		printf("Questo valore %f non puo essere uguale a 0 o maggiore di %f.\n", b, a);
		exit(1);
	} else {
		somma = a + b;
		sottrazione = a - b;
		moltiplicazione = a * b;
		divisione = a / b;
	
		printf("Valore della somma %f\n", somma);
		printf("Valore della sottrazione %f\n", sottrazione);
		printf("Valore della moltiplicazione %f\n", moltiplicazione);
		printf("Valore della divisione %f\n", divisione);
	}
}
