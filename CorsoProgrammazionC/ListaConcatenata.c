/*Lista concatenata singola
* definisco le seguenti funzioni:
* lista vuota: dove è definito solo il puntatore alla testa della lista
* lista_in0: inserisce un nodo alla posizione 0
* lista_in1: inserisce un nodo alla posizione 1
* lista_stampa: stampa il contenuto della lista
*/

#include <stdio.h>
#include <stdlib.h>

struct nodo{
    float info;
    struct nodo *next;
};

typedef struct nodo nodo;

nodo *lista_vuota();
nodo *lista_in0(nodo *, float);
nodo *lista_in1(nodo *, float);
nodo *lista_in(nodo *, float, int);
void lista_stampa(nodo *);
nodo *lista_cerca(nodo *, int);
nodo *lista_out0(nodo *);
nodo *lista_out1(nodo *);
nodo *lista_out(nodo *, int);

int main(){
    nodo *head;
    float val;
    printf("Creo una lista vuota.\n");
    head = lista_vuota();
    printf("inserisco il valore 3.14 nella posizione 0\n");
    head = lista_in0(head, 3.14);
    printf("inserisco il valore 1.41 nella posizione 0\n");
    head = lista_in0(head, 1.41);
    printf("inserisco il valore 2.71 nella posizione 0\n");
    head = lista_in0(head, 2.71);
    printf("inserisco il valore 2.00 nella posizione 1\n");
    head = lista_in1(head, 2.00);
    lista_stampa(head);
    printf("\n");
    nodo *p;
    p = lista_cerca(head, 3);
    if(p != NULL){
        printf("valore %.2f presente nella lista\n",p->info);
    }
    printf("inserisco il valore 5.6 nella posizione 2\n");
    head = lista_in(head, 5.6, 2);
    lista_stampa(head);
    printf("\n");
    printf("Elimino il valore nella posizione 1\n");
    head = lista_out1(head);
    lista_stampa(head);
    printf("\n");
    printf("Elimino il valore nella posizione 0\n");
    head = lista_out0(head);
    lista_stampa(head);
    printf("\n");
    printf("Elimino il valore nella posizione 2\n");
    head = lista_out(head, 2);
    lista_stampa(head);
}

nodo *lista_vuota(){
    nodo *p;
    p = NULL;
    return p;
}

nodo *lista_in0(nodo *head, float val){
    nodo *p_n;
    p_n = malloc(sizeof(nodo));

    if(head == NULL){
        p_n->info = val;
        p_n->next = NULL;
    }
    else
    {
        p_n->next = head;
        p_n->info = val;
    }
    head = p_n;

    return head;
}

nodo *lista_in1(nodo *head, float val){
    nodo *p_n;
    p_n = malloc(sizeof(nodo));

    if(head != NULL){
        p_n->next = head->next;
        p_n->info = val;
        head->next = p_n;
    }

    if(head == NULL){
        return NULL;
    }

    return head;
}

void lista_stampa(nodo *head){
    while(head != NULL){
        printf("%.2f ",head->info, head->next);
        head = head->next;
    }
}

nodo *lista_cerca(nodo *head, int pos){
    /*
	 * ritorna il puntatore al nodo in posizione pos di x.
	 * Se tale nodo non esiste, la funzione ritorna NULL.
	 *
	*/
	int c = 0;
	nodo *p_n;
	p_n = head;
    while(p_n != NULL && c < pos){
        p_n = p_n->next;
        c++;
    }

    return p_n;
}

nodo *lista_out0(nodo *head){

    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        head = NULL;
    }
    else
    {
        head = head->next;
    }

    return head;
}

nodo *lista_in(nodo *head, float val, int pos){
    /* Passo alla funzione il riferimento della lista
     * il valore da inserire e la posizione in cui inserire
     * il nuovo nodo.
    */
    if(head == NULL){
        return NULL;
    }

    nodo *n = lista_cerca(head, pos);

    if(n == NULL){
        return NULL;
    }
    else
    {
        nodo *n_prec = lista_cerca(head, pos-1);
        nodo *p_n;
        p_n = malloc(sizeof(nodo));
        p_n->next = n;
        n_prec->next = p_n;
        p_n->info = val;
    }

    return head;
}

nodo *lista_out1(nodo *head){
    nodo *n_next;
    n_next = lista_cerca(head,2);
    head->next = n_next;

    return head;
}

nodo *lista_out(nodo *head, int pos){
    nodo *p_n, *p_prev;
    p_n = lista_cerca(head, pos);
    p_prev = lista_cerca(head, pos-1);
    p_prev->next = p_n->next;
    free(p_n);

    return head;
}
