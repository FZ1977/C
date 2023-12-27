/*Scrivo un nuovo programma che gestisce una lista dinamica*/
#include <stdio.h>
#include <stdlib.h>


struct Lista{
    float *p;
    int n; // Numero di elementi
    int c; // Capacità della lista
};

typedef struct Lista Lista;

Lista Inserisci(Lista, float);
Lista Crea();

int main(){
    Lista L;

    L = Crea();

    for(int i=0; i<16; i++){
        L = Inserisci(L,(i*2.0));
        printf("c: %d n: %d valore: %f\n", L.c, L.n, L.p[i]);
    }
    //printf("%f",*L.p);
    return 0;
}

Lista Crea(){
    Lista L;
    L.c = 4;
    L.n = 0;
    L.p = malloc(L.c * sizeof(float));

    return L;
}

Lista Inserisci(Lista L, float x){
    if(L.c > L.n){
        L.p[L.n] = x;
        L.n++;

    }
    else
    {
        L.p = realloc(L.p, (2*L.c)*sizeof(float));
        L.p[L.n] = x;
        L.c = L.c * 2;
        L.n++;
    }

    return L;
}
