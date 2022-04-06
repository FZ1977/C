/*
Restituisce un array di interi.
*/

#include <stdio.h>
#include <stdlib.h>

int *crea_array(int n){
	int size = n*sizeof(int);
	int *p = malloc(size);
	//p = malloc(sizeof a[n]);
	
	if ( p != NULL ){
		for(int i = 0; i < n; i++){
			p[i] = 0;		
		}
	}
	
	return p;
}

void main(){	
	int *p; 
	p = crea_array(10);
	free(p);
	printf("%p\n", p[0]);
}
