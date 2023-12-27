/* Ordinare in ordine alfabetico le stringhe passatre da linea di comando */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//void stampa(int, char *[]); //qui passo un array di puntatori
void stampa(int, char **); //qui passo un array di puntatori
int StrCmp(char *, char *);

int main(int argc, char *argv[]){
    int i=1, j=argc;
    char *c;

    printf("Prima di ordinare.\n");
    stampa(argc, argv);
    printf("\n");
    while(j>=2){
        for(i=1; i<j-1; i++){
            if( strcmp(argv[i],argv[i+1]) > 0){
                stampa(argc, argv);
                c = argv[i];
                argv[i] = argv[i+1];
                argv[i+1] = c;
            }
        }
        j--;
    }

    printf("\n");
    printf("Dopo aver ordinato.\n");
    stampa(argc, argv);
}

void stampa(int len, char *a[]){
    for(int i=1; i<len; i++){
        printf("%s ",a[i]);
    }
    printf("\n");
}

int StrCmp(char *a, char *b){
    int n1 = strlen(a);
    int n2 = strlen(b);
    int min;

    if(n1 < n2){
        min = n1;
    }
    else
    {
        min = n2;
    }

    for(int i=0; i<min; i++){
        if(tolower(a[i]) > tolower(b[i])){
            return 0;
        }

        if(tolower(a[i]) < tolower(b[i])){
            return 1;
        }
    }

    return 1;
}
