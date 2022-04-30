/* 
 * Array dinamico di tipo generico
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

void main(){
	void *pi[3];
	int i = 2;
	char c = 'c';
	float f = 3.14;
	
	pi[0] = malloc(sizeof(int));
	pi[1] = malloc(sizeof(char));
	pi[2] = malloc(sizeof(float));
	
	*(int *)pi[0] = i;
	*(char *)pi[1] = c;
	*(float *)pi[2] = f;
	
	printf("int = %d\nchar = %c\nfloat = %f\n", *(int *)pi[0], *(char *)pi[1], *(float *)pi[2]);
}
