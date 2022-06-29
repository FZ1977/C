#include <stdio.h>
#include <stdlib.h>

char *funzione(char *a);

void main(){
	char *s="Stringa";
	char *res;
	int i;
	
	res=funzione(s);
	
	for(i=0; *(res+i)!='\0'; i++){
		printf("%c", *(res+i));
	}
}

char *funzione(char *a){
	char **p;
	int i, n=0;
	
	for(i=0; *(a+i)!='\0'; i++){
		n++;
	}
	
	p = (char **)malloc(sizeof(char*)*n);
	
	for(i=0; *(a+i)!='\0'; i++){
		/*sono tutte e tre forme corrette*/
		//p[i]=&a[i];
		//*(p+i)=&a[i];
		*(p+i)=a+i;
	}
	
	return *p;
}
