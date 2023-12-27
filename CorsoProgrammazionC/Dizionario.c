/*Simulazione di un Dizionario Python scritto in C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items{
    float val;
    char *chiave;
};
typedef struct items items;

struct nodo{
    items item;
    struct nodo *next;
};
typedef struct nodo nodo;

struct dict{
    nodo **lista;
    int size_lista;
    int n_elementi;
};
typedef struct dict dict;

/*Dichiaro i prototipi delle funzioni*/
dict InitDict(int);
dict InsUpdDict(dict, items);
int HashF(dict, char *);
void Stampa(dict);
nodo *SearchKey(nodo *, items);
dict InsZero(dict, items, int);
dict SubItemVal(dict, nodo *, items);

int main(int argc, char *argv[]){
    //int argc = 11;
    //char*argv[] = {"niente","uno","due","tre","quattro","cinque","sei","sette","otto","nove","dieci"};
    dict d;
    d = InitDict(3);
    items item;
    int i;

    for(int i = 1; i < argc; i++){
        item.chiave = argv[i];
        item.val = i;
        d = InsUpdDict(d,item);
    }

    Stampa(d);
}

dict InitDict(int x){
    dict d;
    nodo *p;

    d.size_lista = x;
    d.n_elementi = 0;
    d.lista = malloc(d.size_lista * sizeof(nodo *));

    /*Qui inserisco i valori nel dizionario*/
    for(int i = 0; i < x; i++){
        d.lista[i] = NULL;
    }

    return d;
}

int HashF(dict d, char *a){
    int out = 0;
    int i = 0;

    while(a[i] != '\0'){
        out = out^a[i];
        i++;
    }

    return out % d.size_lista;
}

nodo *SearchKey(nodo *p, items item){
    while(p != NULL){
        if(strcmp(p->item.chiave,item.chiave) == 0){
            return p;
        }
        p = p->next;
    }

    return NULL;
}

dict InsZero(dict d, items item, int h){
    nodo *p;
    p = malloc(sizeof(nodo));
    p->item = item;
    p->next = d.lista[h];
    d.lista[h]  = p;
    d.n_elementi++;

    return d;
}

dict SubItemVal(dict d, nodo *p, items item){
    p->item = item;
    d.n_elementi++;

    return d;
}

dict InsUpdDict(dict d, items item){
    int h = HashF(d,item.chiave);
    nodo *p;
    //p = d.lista[h];
    p = SearchKey(d.lista[h], item);
    if(d.lista[h] == NULL){
        p = malloc(sizeof(nodo));
        p->item = item;
        p->next = NULL;
        d.lista[h] = p;
        d.n_elementi++;

        return d;
    }

    if(p == NULL){
        /*devo recuperare il valore del puntatore*/
        /*eseguo una ricerca sulla chiave ricavata*/
        /*
        while(p != NULL){
            if(strcmp(p->item.chiave,item.chiave) == 0){
                p->item = item;
                d.n_elementi++;
                return d;
            }
            p = p->next;
        }

        p = malloc(sizeof(nodo));
        p->item = item;
        p->next = d.lista[h];
        d.lista[h]  = p;
        d.n_elementi++;
        */
        d = InsZero(d,item,h);
    }
    else
    {
        /*
        p->item = item;
        d.n_elementi++;
        */
        d = SubItemVal(d,p,item);
    }

    return d;
}

void Stampa(dict d){
    int i;
    nodo *p;
    for(i = 0; i < d.size_lista; i++){
        p = d.lista[i];
        while(p != NULL){
            printf("(%s %f) ",p->item.chiave, p->item.val);
            p = p->next;
        }
        printf("\n");
    }
}
