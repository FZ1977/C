#include <stdio.h>

int main(){
    int a, b, c;
    float d;

    a = 10;
    b = 3;

    c = a/b;
    d = a/b;

    printf("divisione tra interi con risultato intero. %d\n", c);
    printf("divisione tra interi con risultato float. %.2f\n", d);

    float e = 3.0;

    c = a/e;
    d = a/e;

    printf("divisione tra intero e float con risultato intero. %d\n", c);
    printf("divisione tra intero e float con risultato float. %.2f\n", d);
}
