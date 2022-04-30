#include <stdio.h>

void main(void){
	char *pc;
	int *pi;
	double *pd;
	
	printf("%lu %lu %lu\n", sizeof(pc), sizeof(pi), sizeof(pd));
	printf("%lu %lu %lu\n", sizeof(char *), sizeof(int *), sizeof(double *));
	
	printf("%lu %lu %lu\n", sizeof(*pc), sizeof(*pi), sizeof(*pd));
	printf("%lu %lu %lu\n", sizeof(char), sizeof(int), sizeof(double));
	
	return 0;
}
