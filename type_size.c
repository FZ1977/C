#include <stdio.h>

void main(){
	int a[10] = {0};
	char b[10] = {0};
	float c[10] = {0};
	double d[10] = {0};
	printf("Size di int: %d\n", sizeof(int));
	printf("Size di char: %d\n", sizeof(char));
	printf("Size di float: %d\n", sizeof(float));
	printf("Size di double: %d\n", sizeof(double));
	printf("Size di array int: %d\n", sizeof(a));
	printf("Size di array char: %d\n", sizeof(b));
	printf("Size di array float: %d\n", sizeof(c));
	printf("Size di array double: %d\n", sizeof(d));
}
