#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    char *stringa;
    int base;
    int NumeroCaratteri = strlen(argv[1]);
    int ValoreIntero;
    int test=0;

    if(argc != 3)
    {
        printf("Numero di parametri passati errato!\n");
        return 1;
    }

    stringa=argv[1];
    base=atoi(argv[2]);

    /*Procedo con la verifica della stringa inserita*/

    for(int i=0; i<NumeroCaratteri; i++)
    {
        ValoreIntero = stringa[i] - '0';
        if(ValoreIntero>=base && base!=16)
        {
            printf("Stringa NON valida!\n");
            return 1;
        }

        if(base==16 && ValoreIntero<17 && ValoreIntero>22)
        {
            printf("Stringa NON valida!\n");
            return 1;
        }
    }

    printf("Stringa valida\n");

    return 0;
}
