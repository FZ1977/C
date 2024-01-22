/*Esame5*/

#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valore;
    struct nodo *succ;
    struct nodo *prec;
};
typedef struct nodo nodo;

nodo *input_list();
void stampa(nodo *a);

int main(){
    nodo *a, *p, *nodo;
    char str[50];
    int i;

    printf("Inserisci: ");
    scanf("%s",&str);
    i = 0;
    while(str[i] != '\0'){
        if(str[i] < '0'){
            return 0;
        }
        if(str[i] > '9'){
            return 0;
        }
        i++;
    }
    nodo = input_list();
    if(nodo == NULL){
        exit(0);
    }
    a = nodo;
    a->valore = atoi(str);
    p = a;

    while(1){
        printf("Inserisci: ");
        scanf("%s",&str);
        i = 0;
        while(str[i] != '\0'){
            if( str[i] < '0' ){
                stampa(a);
                return 0;
            }
            if( str[i] > '9' ){
                stampa(a);
                return 0;
            }
            i++;
        }
        nodo = input_list();
        if(nodo == NULL){
            stampa(a);
            return 0;
        }
        p->succ = nodo;
        nodo->valore = atoi(str);
        nodo->prec = p;
        p = p->succ;
    }
}

nodo *input_list(){
    nodo *a = malloc(sizeof(nodo));
    if(a == NULL){
        return NULL;
    }
    a->prec = NULL;
    a->succ = NULL;

    return a;
}

void stampa(nodo *a){
    nodo *p = a;
    printf("stampa lista\n");
    while(p != NULL){
        printf("%d ",p->valore);
        p = p->succ;
    }
    printf("\n");
}
