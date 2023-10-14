#include <stdio.h>
#include <stdlib.h>

struct elem{
    char abbr[2];
    char *estesa;
    struct elem *next;
};

typedef struct elem elem;

elem *nodo(elem *, char a[2], char *e);

void main(){
    elem *testa=NULL, *pnodo=NULL;

    testa=nodo(testa, "TO","TORINO");
    testa=nodo(testa, "MI","MILANO");
    testa=nodo(testa, "RM", "ROMA");
    printf("%c%c - %s\n", testa->abbr[0], testa->abbr[1], testa->estesa);
    testa=testa->next; //vado avanti nella lista.
    printf("%c%c - %s\n", testa->abbr[0], testa->abbr[1], testa->estesa);
    testa=testa->next; //vado avanti nella lista.
    printf("%c%c - %s\n", testa->abbr[0], testa->abbr[1], testa->estesa);
}

elem *nodo(elem *testa, char a[2], char *e){
    elem *p;

    p = malloc(sizeof(elem));

    p->abbr[0] = a[0];
    p->abbr[1] = a[1];
    p->estesa = e;
    p->next = NULL;
    p->next=testa;
    testa=p;

    return testa;
}
