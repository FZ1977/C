/*
* Trenta giorni ha Novembre,
* con April, Giugno e Settembre.
* Di ventotto ce n’è uno,
* tutti gli altri ne han trentuno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10];
    int numero_giorno;

    printf("Inserisci il numero del giorno:");
    fgets(s,sizeof(s),stdin);
    numero_giorno=atoi(s);

    if(numero_giorno<=31){
        printf("Gennaio");
    }
    if(32<=numero_giorno && numero_giorno<=59){
        printf("Febbraio");
    }
    if(60<=numero_giorno && numero_giorno<=90){
        printf("Marzo");
    }
    if(91<=numero_giorno && numero_giorno<=120){
        printf("Aprile");
    }
    if(121<=numero_giorno && numero_giorno<=151){
        printf("Maggio");
    }
    if(152<=numero_giorno && numero_giorno<=181){
        printf("Giugno");
    }
    if(182<=numero_giorno && numero_giorno<=212){
        printf("Luglio");
    }
    if(213<=numero_giorno && numero_giorno<=243){
        printf("Agosto");
    }
    if(244<=numero_giorno && numero_giorno<=273){
        printf("Settembre");
    }
    if(274<=numero_giorno && numero_giorno<=304){
        printf("Ottobre");
    }
    if(305<=numero_giorno && numero_giorno<=334){
        printf("Novembre");
    }
    if(335<=numero_giorno && numero_giorno<=365){
        printf("Dicembre");
    }

    return 0;
}
