#include <stdio.h>
#include <stdlib.h>

struct array_dinamico{
    int n; /* numero di elementi dell'array */
    int p; /* posizione dell'ultimo elemento inserito */
    int r; /* il numero di elementi rimasti vuoti */
};

typedef struct array_dinamico array_dinamico;

int *my_array(int n, array_dinamico *pa);
void stampa(int *p, array_dinamico *pa);

int main(){
    int n = 4;
    array_dinamico a, *pa;
    pa = &a;

    int *p = my_array(n, pa);

    for(int i=0; i<50; i++){
        printf("n=%d p=%d r=%d\n",pa->n, pa->p, pa->r);
        if(pa->r <= 1){
            p=realloc(p,(pa->n*2)*sizeof(int));
            pa->n = 2*pa->n;
            pa->p++;
            p[i] = i;
            pa->r = pa->n - pa->p;
            //printf("dimensione=%d numero_elementi=%d\n",pa->n, pa->p);
            stampa(p,pa);
        } else {
            pa->p++;
            p[i] = i;
            pa->r--;
            //printf("dimensione=%d numero_elementi=%d\n",pa->n, pa->p);
            stampa(p,pa);
        }
    }
}

int *my_array(int n, array_dinamico *pa){
    int *p;
    p = malloc(n*sizeof(int));
    pa->n = n;
    pa->p = 0;
    pa->r = n;

    return p;
}

void stampa(int *p, array_dinamico *pa){
    for(int i=0; i<pa->p; i++){
        printf("%d ",p[i]);
    }
    printf("\n");
}