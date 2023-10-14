#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordinato(char *a);

void main(){
    char* stringa="abcdilmna";

    printf("La stringa %s\n", stringa);
    if(ordinato(stringa) == 0){
        printf("Valore di ritorno: %d\n",ordinato(stringa));
    } else {
        printf("Valore di ritorno: %d\n",ordinato(stringa));
    }

}

int ordinato(char *a){
    int len=strlen(a);
    int test = 1;

    for(int i=0; i<len-1; i++){
        if(a[i]>a[i+1]){
            test = 0;
        }
    }

    return test;
}
