#include <stdio.h>
#include <stdlib.h>

char *funzione(char *a){
	int i, j=0, conta=0;
	
	for(i=0; a[i]!='\0'; i++){
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			conta++;
		}
	}
	
	char **p = malloc(sizeof(char)*conta+1);
	
	if(p == NULL){
		printf("non c'è abbastanza memoria per allocare memoria.\n");
	}
	
	for(i=0; a[i]!='\0'; i++){
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			p[j]=&a[i];
			j++;
		}
	}
	
	return *p;
}
