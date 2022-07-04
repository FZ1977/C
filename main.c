#include <stdio.h>
#include <stdlib.h>

int intC(char *x);

int main(){
	char *x="Stringa";
	printf("Valore: %d\n", intC(x));
}

int intC(char *x){
	int i, n=0;
	for(i=0; i<strlen(x); i++){
		n += x[i];
		printf("%d %c\n",n, n);
	}
	return n;
}
