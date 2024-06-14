#include <stdio.h>
#include <stdlib.h>


struct vettore{
    float valore;
    int c; //capacità del vettore
    int i; //indice ultimo elemento inserito
};

typedef struct vettore vettore;

vettore * set_vettore();
vettore * insert(vettore *p_vett, float valore);
void stampa_vettore(vettore *p_vett, int i);

int main(){
    vettore *p, *p_i;
    
    printf("set del vettore dinamico\n");
    p = set_vettore();
    p_i = p;
    
    printf("insert del valore nel vettore\n");
    p=insert(p, 3.14);

    for(int i=0; i<20; i++){
        p=insert(p, 2.71*i);
    }

    printf("stampa del vettore\n");
    stampa_vettore(p_i,p->i);

    return 0;
}

vettore * set_vettore(){
    vettore *p = malloc(4*sizeof(*p));
    p->c = 10;
    p->i = 0;

    return p;
}

vettore * insert(vettore *p_vett, float valore){
    int i = p_vett->i;
    int c = p_vett->c;
    if (i<c/2){
        p_vett->valore = valore;
        p_vett++;
        i++;
        p_vett->i = i;
        p_vett->c = c;
    } else {
        c=c*2;
        p_vett = realloc(p_vett,c*sizeof(*p_vett));
        p_vett->valore = valore;
        p_vett++;
        i++;
        p_vett->i = i;
        p_vett->c = c;
    }
    printf("i=%d c=%d\n", p_vett->i, p_vett->c);
    
    return p_vett;
}

void stampa_vettore(vettore *p_vett, int i){
    int j = 0;
    while( j < i ){
        printf("%f - ", p_vett->valore);
        p_vett++;
        j++;
    }
    printf("\n");
}