/*Si implementi nel linguaggio C la struttura dati coda
 *contenente float facendo in modo che le operazioni sopra
 *descritte abbiano complessità temporale costante nel caso peggiore.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    float v;
    struct nodo *next;
    struct nodo *prev;
};
typedef struct nodo nodo;

struct coda{
    nodo n;
    nodo *p_testa;
    nodo *p_coda;
    int x; //numero elementi nella coda
    int l; //numero nodo coda
};
typedef struct coda coda;

coda coda_new(); // restituisce una coda vuota
coda coda_in(coda, float); // inserisce nella coda l'elemento e
nodo coda_get(coda); // restituisce l'elemento che è presente nella coda q da più tempo.
coda coda_del(coda); // elimina dalla coda q l'elemento più vecchio.
void mostra_coda(coda);

int main(int argc, char *argv[]){
    coda q = coda_new();
    nodo n;
    mostra_coda(q);

    q = coda_in(q,3.14);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_in(q,2.71);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_in(q,1.00);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_in(q,2.00);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_in(q,3.00);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_in(q,4.00);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
    q = coda_del(q);
    printf("Valore piu vecchio = %.2f\n",coda_get(q).v);
    mostra_coda(q);
}

coda coda_new(){
    coda q;
    q.p_testa = NULL;
    q.p_coda = NULL;
    q.x = 0;
    q.l = 5;

    return q;
}

coda coda_in(coda q, float e){
    nodo *pn;
    pn = malloc(sizeof(nodo));
    pn->v = e;

    if(q.x == 0){
        pn->next = NULL;
        pn->prev = NULL;
        q.p_coda = pn;
        q.p_testa = pn;
        q.x++;
        return q;
    }

    if(q.x == 1){
        q.p_coda->prev = pn;
        pn->next = q.p_coda;
        q.p_testa = pn;
        q.x++;
        return q;
    }

    if(q.x > 1 && q.x < 5){
        pn->next = q.p_testa;
        q.p_testa->prev = pn;
        q.p_testa = pn;
        q.x++;
        return q;
    }

    if(q.x == q.l){
        pn->next = q.p_testa;
        pn->prev = NULL;
        q.p_testa->prev = pn;
        q.p_testa = pn;
        q.p_coda = q.p_coda->prev;
        q.p_coda->next = NULL;
        return q;
    }
}
nodo coda_get(coda q){
    return *(q.p_coda);
}

coda coda_del(coda q){
    if(q.x == 0){
        return q;
    }
    q.p_coda = q.p_coda->prev;
    q.p_coda->next = NULL;
    q.x--;
    return q;
}

void mostra_coda(coda q){
    if(q.x == 0){
        printf("num_ elementi = %d , len_lista = %d\n",q.x,q.l);
    }
    printf("num_ elementi = %d , len_lista = %d\n",q.x,q.l);
    while(q.p_testa != NULL){
        printf("%.2f | ",q.p_testa->v);
        q.p_testa = q.p_testa->next;
    }
    printf("\n");
    printf("#############\n");
}
