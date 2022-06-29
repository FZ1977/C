/*
Creo il codice in c che riproduca lo stosse comportamento del codice python:
L = []
L1 = [L]
L2 = L1
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	char *L;
	char **L1;
	char **L2;
	
	L = malloc(sizeof(char));
	
	L1 = malloc(sizeof(char *));
	L2 = L1;
	
	L1[0] = &L[0];
}
