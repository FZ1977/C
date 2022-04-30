/* Struttura e puntatori */

#include <stdio.h>
#include <stdlib.h>

struct test_array{
	int *p;
};

typedef struct test_array test_array;

void main(){
	int i;
	test_array p;
	int b[]={1, 2, 3};
	void c[3];
	
	c=malloc(sizeof(void));
	
	printf("Contenuto puntatore prima: %p\n", p.p);
	p.p=b;
	printf("Contenuto puntatore dopo: %p\n", p.p);
	printf("Contenuto b[0]: %p\n", b);
	for(i=0; i<3; i++){
		printf("%d\n", *(p.p+i));
	}
	printf("================\n");
	p.p[1]=5;
	for(i=0; i<3; i++){
		printf("%d\n", *(p.p+i));
	}
	
}
