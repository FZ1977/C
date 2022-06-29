#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int funzione(char *a);

int main(){
	char *a="stringa";
	int res=0;
	
	res=funzione(a);
	printf("%d",res);
}

int funzione(char* a){
	int i, n=0;
	for(i=0;i<strlen(a);i++){
		n += a[i];
	}
	return n;
}
