#include <stdio.h>
#include <stdlib.h>

struct vett{
    int i, c, n;
};

typedef struct vett vett;

float * set(vett v);
void stampa(float *p, vett v);
float * insert(float *p, vett v, float valore);

int main(){
    /*Impostazioni iniziali del vettore*/
    float *p;
    vett v;

    p = set(v);
    stampa(p,v);
    p = insert(p,v,3.14);
    stampa(p,v);

    return 0;
}

float * set(vett v){
    float *p;
    v.c = 5;
    v.i = 0;
    v.n = 0;
    p = malloc(v.c*sizeof(*p));
    return p;
}

float * insert(float *p, vett v, float valore){
    printf("Funzione insert\n");
    float *pv;
    pv = p;

    if(v.i<v.c){
        *pv = valore;
        pv++;
        v.i++;
        v.n++;
    } else {
        v.c = v.c * 2;
        pv = realloc(pv,v.c*sizeof(*pv));
        pv + v.i;
        *pv = valore;
        v.i++;
        v.n++;
    }
    
    return pv;  
}

void stampa(float *p, vett v){
    printf("Funzione stampa\n");
    int j=0;
    p = p - v.i;
    while ( j < v.i){
        printf("%f ",*p);
        p++;
        j++;
    }
}