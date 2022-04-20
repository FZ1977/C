#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *slice(char *a, int i, int j);

void main(){
	char a[] = "Programmazione C e Python";
	char *b;

	b=slice(a,3,9);
	if(b!=NULL){
		printf("%s\n",b);
	} else {
		printf("NULL\n",b);
	}
}

char *slice(char *a, int i, int j){
	int n=strlen(a);
	int h;
	char *b; /*stringa di ouput*/
	
	if(i<0 || j<0 || i>n || j>n || i>=j){
		return NULL;
	} 

	b = malloc(sizeof(char)*(j-i+1));

	for(h=i;h<j;h++){
		b[h-i]=a[h];
	}
	b[h-i]='\0';

	return b;
}
