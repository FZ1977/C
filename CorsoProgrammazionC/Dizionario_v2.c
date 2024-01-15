/* Esercizio dizionario in C */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
nodo *lista_in0(nodo*, d_item );
void dict_mostra(dict);
void lista_mostra(nodo*);
//esercizi
dict dict_del(dict, char*);
nodo *lista_out0(nodo *);
dict dict_resize(dict, int);

int main(int n, char *args[]){
	dict d = dict_init(5);
	int i;
	d_item e;

	for (i = 1; i < n; i++){
		e.k = args[i];
		e.v = i;
		d = dict_update(d, e);
	}
    printf("#### Inserimento ####\n");
	dict_mostra(d);

    d = dict_del(d, "sette");
    printf("#### Delete ####\n");
    dict_mostra(d);

	d = dict_resize(d, 3);
	//d = dict_update(d, e);
    printf("#### Resize ####\n");
	dict_mostra(d);
}

int h(char *a, dict d){
    int out = 0;
    int i = 0;

    while(a[i] != '\0'){
        out = a[i]^out;
        i++;
    }

    return out % d.m;
}

dict dict_init(int x){
    dict d;
    d.a = malloc(x*sizeof(nodo *));
    d.n = 0;
    d.m = x;

    for(int i = 0; i < d.m; i++){
        d.a[i] = NULL;
    }

    return d;
}

dict dict_update(dict d, d_item item){
    int i = h(item.k, d);
    nodo *pnodo;
    pnodo = lista_cerca_k(d.a[i], item.k);

    if(pnodo == NULL){
        d.a[i] = lista_in0(d.a[i],item);
        d.n++;
    }
    else
    {
        d.a[i]->info = item;
    }

    return d;
}

nodo *lista_cerca_k(nodo *pn, char *a){

    if(pn == NULL){
        return NULL;
    }
    else
    {
        while(pn != NULL){
            if(strcmp(pn->info.k, a) == 0){
                return pn;
            }
            pn = pn->succ;
        }
        return NULL;
    }
}

nodo *lista_in0(nodo *pn, d_item item){
    nodo *pnodo;
    pnodo = malloc(sizeof(nodo));
    if(pn == NULL){
        pnodo->info = item;
        pnodo->succ = NULL;
    }
    else
    {
        pnodo->info = item;
        pnodo->succ = pn;
    }

    return pnodo;
}

void dict_mostra(dict d){
    int i = 0;

    for (i = 0; i < d.m; i++){
		printf("%d - ", i);
		lista_mostra(d.a[i]);
	}

	printf("==================\n");
}

void lista_mostra(nodo *pnodo){
    while(pnodo != NULL){
        printf("(%s, %.2f) ", pnodo->info.k, pnodo->info.v);
		pnodo = pnodo->succ;
	}
	printf("\n");
}
//esercizi
dict dict_del(dict d, char *a){
    /*
    * Se k e' una chiave del dizionario d, elimina da d la coppia con chiave k.
    * Ritorna il dizionario modificato
    */

    int i = h(a, d);
    nodo *pn = lista_cerca_k(d.a[i],a);

    if(pn == NULL){
        return d;
    }

    if(pn->succ == NULL && pn != d.a[i]){
        pn->info = d.a[i]->info;
        d.a[i] = lista_out0(d.a[i]);
        d.n--;
        return d;
    }

    if(pn->succ == NULL && pn == d.a[i]){
        d.a[i] = NULL;
        d.n--;
        return d;
    }

    if(pn->succ != NULL){
        nodo *p = d.a[i];
        while(p->succ != pn){
            p = p->succ;
        }
        pn = lista_out0(pn);
        p->succ = pn;
        d.n--;
        return d;
    }
}

nodo *lista_out0(nodo *pn){
    nodo *pnzero = pn;
    if(pn = NULL){
        return NULL;
    }
    else
    {
        pn = pnzero->succ;
    }

    free(pnzero);
    return pn;
}

dict dict_resize(dict d, int x){
    dict d_new = dict_init(x);
    nodo *p;
    int i, i_new;

    for(i = 0; i < d.m; i++){
        while(d.a[i] != NULL){
            i_new = h(d.a[i]->info.k, d_new);
            //printf("%s - %f\n", d.a[i]->info.k, d.a[i]->info.v);
            d_new.a[i_new] = lista_in0(d_new.a[i_new], d.a[i]->info);
            d.a[i] = lista_out0(d.a[i]);
        }
    }
    d_new.n = d.n;
    free(d.a);

    return d_new;
}
