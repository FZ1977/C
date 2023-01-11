#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i[5]; /* allocazione statica */
	int *pi;
	
	pi = malloc(sizeof(int)*5); /* allocazione dinamica */
	
	printf("v[] = %d - *p = %d\n", sizeof(i), sizeof(pi)*5);
	
	if(pi == NULL){
		printf("Allocazione non possibile.\n");
		return -1;
	}
	
	for(int x = 0; x<5; x++){
		i[x] = x;
		*pi = x;
		pi++;
	}
	
	pi = pi - 5;
	
	for(int x = 0; x<5; x++){
		printf("v[] = %d - *p = %d\n", i[x], *pi);
		pi++;
	}
	free(pi);
}
