#include <stdio.h>

void Stampa(int a, int b){
    printf("Valore di a prima di swap a=%d\n",a);
    printf("Valore di b prima di swap b=%d\n",b);
}

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
