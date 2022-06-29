#include <stdio.h>
#include <stdlib.h>

struct array_int{
        int *a;
        int n;
};

typedef struct array_int array_int;

array_int posizione_vocali(char *s){
	array_int x;
	int conta=0;
	int i, j=0;
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i] == 'I' || s[i] == 'i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u'){
			conta = conta + 1;
		}
		
	}
	x.n = conta;
	x.a = malloc(sizeof(int)*x.n);

	for(i=0; s[i]!='\0' && j<x.n; i++){
		//printf("%c - %d\n",s[i],i);
		if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i] == 'I' || s[i] == 'i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u'){
			//printf("%c - %d\n",s[i],i);
			x.a[j]=i;
			j++;
		}
	}
	
	return x;
}
