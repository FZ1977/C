/* Scrivere una funzione che trasforma una stringa numerica nel corrispondente intero */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int Str_To_Int(char *a);

int main(int argc, char *argv[]){
	for(int i=1; i<argc; i++){
        n = Str_To_Int(argv[i]);
		if(n != 0){
            printf("%d\n", n);
		}
	}
}

int Str_To_Int(char *a){
	int n = strlen(a)-1;
	int k = 1;
	int x = 0;

	for(int i=n; i>=0; i--){
		if(isdigit(a[i])){
			x += (a[i] - '0')*k;
			k *= 10;
		}
		else
        {
            return 0;
		}
	}

	return x;
}
