/* verificare che un vettore contenga tutti gli elemnti uguali */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f_confronta(char *a);

int main(){
	char *a = "Sono un vettore di caratteri 1111111111";
	char *b = "ssssssssssssssssssssssssssssss";
	char *c = "sssssssssssSssssssssssssssssss";
	
	f_confronta(a);
	f_confronta(b);
	f_confronta(c);
}

int f_confronta(char *a){
	int i=0, conta = 0;
	int len = strlen(a);
	
	for(i=0; a[i]!='\0'; i++){
		if(a[0] == a[i]){
			conta++;
		}
	}
	
	if(conta == len){
		printf("La stringa contiene tutti i caratteri uguali.\n");
		return 0;
	}
	
	printf("La stringa non contiene tutti i caratteri uguali.\n");
	return 1;
}
