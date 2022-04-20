#include <stdio.h>

/*
Scrivere una funzione che sostituisce le maiuscole con le minuscole e le minuscole con le maiuscole in una stringa. 
*/

void swap_cases(char *a);

void main(){
	char a[]="ProGraMMazi0ne C e PyThOn";

	printf("%s\n", a);
	swap_cases(a);
	printf("%s\n", a);
}

void swap_cases(char *a){
	int i=0;

	while(a[i]!='\0'){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]='a'-'A'+a[i];
		} else if(a[i]>='a' && a[i]<='z'){
			a[i]='A'-'a'+a[i];
		}
		i++;
	}
}
