/*
Sia dato un numero intero positivo N inserito da tastiera. Si scriva un programma in
linguaggio C che calcoli i numeri interi che sono divisori (con resto uguale a zero) di N.
Dire inoltre se N è un numero primo.
Suggerimento.
• Un numero M è divisore di un numero N se il resto della divisione N/M è uguale a
zero.
• Un numero è primo se è divisibile solo per 1 o per il numero stesso.
*/

#include <stdio.h>

void main(){
	int n, d, cnt = 0;

	printf("Inserisci un numero intero: ");
	scanf("%d", &n);

	for(d=2; d<=n; d++){
		if(n%d == 0){
			printf("%d e' divisore di %d\n", d, n);
			cnt++;
		}
	}

	if(cnt > 1){
		printf("cnt - %d\n",cnt);
		printf("%d non e' numero primo.\n", n);
	} else {
		printf("%d e' numero primo.\n", n);
	}  
}
