/*
1. inserisco un carattere da tastiera
2. verifico se è un carattere alfabetico - isalpha
3. in caso è un carattere alfabetico stampa a video se è minuscolo o maiuscolo
4. nel caso non sia un carattere alfabetico segnala un errore
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    char carattere;

    printf("Inserisci un carattere: ");
    carattere=getc(stdin);

    /*verifico se è un carattere alfabetico*/
    if(isalpha(carattere))
    {
        if(isupper(carattere))
        {
            printf("Il carattere e' maiuscolo\n");
        }
        else
        {
            printf("Il carattere e' minuscolo\n");
        }
    }
    else
    {
        printf("Non e' un carattere alfabetico.\n");
        return 1;
    }
    return 0;
}
