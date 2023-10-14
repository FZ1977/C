#include <stdio.h>
#include <stdlib.h>

int incrementa_byvalue(int a);
void incrementa_byref(int *a);

void main(){
    int x=5;
    int *p;

    printf("Valore di x prima: %d.\n",x);
    x=incrementa_byvalue(x);
    printf("Valore di x dopo : %d.\n",x);

    p=&x;
    printf("Valore di x prima: %d\n",x);
    incrementa_byref(p);
    printf("Valore di x dopo : %d\n",x);
}

int incrementa_byvalue(int a){
    return a=a+1;
}

void incrementa_byref(int *a){
    (*a)++;
}
