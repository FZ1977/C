#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int valore;
    struct nodo *pnodo;
};

typedef struct nodo nodo;

nodo *crea_nodo();

int main(){
    nodo *p;
    p = NULL;
    
    p = crea_nodo();

    printf("Creo la mia lista\n");


    return 0;
}

nodo *crea_nodo(){
    nodo new_nodo;
    nodo *p_next;
    p_next = &new_nodo;
    p_next->pnodo = NULL;
    
    return p_next;
}