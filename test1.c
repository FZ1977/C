#include <stdio.h>
#include <stdlib.h>

void main(){
	char *a = "stringa";
	int n = strlen(a);
	char *b = a +n/2;
	printf("%ld - %ld\n",strlen(a),strlen(b));
	printf("%ld\n",strlen(a)-strlen(b));
}
