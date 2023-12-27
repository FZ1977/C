#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct d_item {
    char *k;
    float v;
};
typedef struct d_item d_item;

struct nodo {
    d_item info;
    struct nodo *succ;
};
typedef struct nodo nodo;

struct dict {
    nodo **a;
    int m; // numero di liste (dimensione di a)
    int n; // numero di elementi nel dizionario
};
typedef struct dict dict;

int h(char*, dict);
dict dict_init(int);
dict dict_update(dict, d_item);
nodo *lista_cerca_k(nodo*, char*);
nodo *lista_in0(nodo*, d_item);
void dict_mostra(dict);
void lista_mostra(nodo*);

int main(int argc, char *argv[]){
    dict d = dict_init(3);
    d_item item;

    for(int i = 1; i<argc; i++){
        item.k = argv[i];
        item.v = i;
        d = dict_update(d, item);
    }

    dict_mostra(d);
}

nodo *lista_cerca_k(nodo *p, char *k){
    nodo *n = p;
    while(n != NULL){
        if(strcmp(n->info.k, k)){
            return n;
        }
        n = n->succ;
    }

    return NULL;
}

nodo *lista_in0(nodo *n, d_item item){
    nodo *pn = malloc(sizeof(nodo));

    pn->info = item;
    pn->succ = n;

    return pn;
}

void dict_mostra(dict d){
    int i;
    for(i = 0; i < d.m; i++){
        printf("%d - ", i);
        lista_mostra(d.a[i]);
    }
}

void lista_mostra(nodo *p){
    nodo *n = p;
    while(n != NULL){
        printf("(%s %.2f) ",n->info.k, n->info.v);
        n = n->succ;
    }
    printf("\n");
}

dict dict_update(dict d, d_item item){
    int m = h(item.k,d);
    nodo *n;

    n = lista_cerca_k(d.a[m],item.k);

    if(n == NULL){
        printf("Aggiungo valore\n");
        d.a[m] = lista_in0(d.a[m], item);
        d.n++;
    }
    else
    {
        printf("Aggiorno valore\n");
        n->info.v = item.v;
    }

    return d;
}

dict dict_init(int m){
    dict d;
    int i;
    d.m = m;
    d.n = 0;
    d.a = malloc(m*sizeof(nodo *));

    for(i = 0; i < m; i++){
        d.a[i] = NULL;
    }

    return d;
}

int h(char *a, dict d){
    int i = 0;
    int somma = 0;
    while(a[i] != '\0'){
        somma = a[i]^somma;
        i++;
    }
    return somma%d.m;
}
