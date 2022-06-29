/*strcpy con puntatori*/
#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *a, char *b);

void main(){
	char *a="Sono una stringa";
	char *b, *res;
	
	res=strcpy(a,b);
	
	for(int i=0;*(res+i)!='\0';i++){
		printf("%c",*(res+i));
	}
}

char *strcpy(char *a, char *b){
	int i, n;
	
	for(i=0; *(a+i)!='\0'; i++){
		n++;
	}
	
	b = (char *)malloc(sizeof(char)*(n+1));
	
	for(i=0;*(a+i)!='\0';i++){
		*(b+i)=*(a+i);
	}
	*(b+i)='\0';
	
	return b;
}
