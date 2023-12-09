/* Scrivere una funzione che prende in input due stringhe
*  e ritorna una stringa uguale alle due stringhe concatenate
*/

#include <stdio.h>
#include <stdlib.h>

char * ConcatenaStringhe(char *, char *);

int main(){
    char *a = "fabio";
    char *b = "elisa";
    char *c;

    printf("prima stringa - %s\n",a);
    printf("seconda stringa - %s\n",b);
    c = ConcatenaStringhe(a,b);
    printf("terza stringa - %s\n",c);
}

char * ConcatenaStringhe(char *a, char *b){
    char *c;
    int n = 0, m = 0;
    int s;
    int i = 0;

    while(a[n] != '\0'){
        n++;
    }

    while(b[m] != '\0'){
        m++;
    }
    s = n + m + 1;
    c = malloc(s * sizeof(char));

    n = 0;
    while(a[n] != '\0'){
        c[i] = a[n];
        i++;
        n++;
    }

    m = 0;
    while(b[m] != '\0'){
        c[i] = b[m];
        i++;
        m++;
    }

    c[i] = '\0';

    return c;
}
