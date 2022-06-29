/*strcpy con array*/
#include <stdio.h>

char *strcpy(char a[], char b[]);

void main(){
	char a[20]="Sono una stringa";
	char b[20];
	
	strcpy(a,b);
	
	for(int i=0;b[i]!='\0';i++){
		printf("%c",b[i]);
	}
}

char *strcpy(char a[], char b[]){
	int i=0;
	for(;a[i]!='\0';i++){
		b[i]=a[i];
	}
	b[i]='\0';
	
	return b;
}
