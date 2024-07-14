#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int valore;
    struct nodo *succ;
    struct nodo *prec;
};

typedef struct nodo nodo;

nodo *input_list();
void stampa(nodo *p);

int main(){
    nodo *testa = NULL, *p, *p_temp;
    char s[50];
    int n, i;
    int test = 1;

    while(test==1){
        printf("valore: ");
        scanf("%s",&s);
        i=0;
        while(s[i] != '\0'){
            if( s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9'){
                test=0;
            }
            i++;
        }
    
        if(test){
            if( testa == NULL ){
                p_temp = input_list();
                testa = p_temp;
                p = testa;
                testa->valore = atoi(s);
            } else {
                p_temp = input_list();
                p->succ = p_temp;
                p_temp->prec = p;
                p_temp->valore = atoi(s);
                p = p_temp;
                p_temp = NULL;
            }
        } else {
            stampa(testa);
            return 0;
        }
    }
}

nodo *input_list(){
    nodo *p;
    p = malloc(sizeof(nodo));
    p->prec = NULL;
    p->succ = NULL;

    return p;
}

void stampa(nodo *p){
    nodo *p_nodo;
    p_nodo = p;
    while(p_nodo != NULL){
        printf("%d ",p_nodo->valore);
        p_nodo = p_nodo->succ;
    }
    printf("\n");
    while(p_nodo != NULL){
        printf("%d ",p_nodo->valore);
        p_nodo = p_nodo->prec;
    }
}