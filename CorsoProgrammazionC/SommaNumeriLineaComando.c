/* Scrivere un programma che somma i valori numerici passati da linea di comando */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int Str_To_Int(char *, int *);

int main(int argc, char *argv[]){
    int test;
    int n;
    int somma = 0;

    for(int i=1; i<argc; i++){
        test = Str_To_Int(argv[i], &n);
		if(test != 0){
		    somma += n;
		}
	}
    printf("La somma e': %d\n",somma);
}

int Str_To_Int(char *a, int *x){
	int n = strlen(a)-1;
	int k = 1;
	*x = 0;
	int appo=0;

	for(int i=n; i>=0; i--){
		if(isdigit(a[i])){
			*x += (a[i] - '0')*(k);
			k *= 10;
		}
		else
        {
            return 0;
		}
	}

	return 1;
}
