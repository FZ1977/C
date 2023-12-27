/*Esempi di prova per realizzare una funzione hash*/

#include <stdio.h>
#include <stdlib.h>

int hash(char *);

int main(){
    char *s[]={"ciao","fabio","elisa","paola","maui","casa","automobile","rosso","verde","blu","giallo"};
    for(int i=0; i<12; i++){
        printf("%s --> %i\n",s[i], hash(s[i]));
    }
}

int hash(char *s){
    return ((char)s);
}
