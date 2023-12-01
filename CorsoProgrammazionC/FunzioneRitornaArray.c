/* Scrivere una funzione che prende un array in ingresso x[] e ritorna
* un array s[n] tale che s[i] = x[1] + x[2] + ... + x[i]
*/

#include <stdio.h>
#include <stdlib.h>

int *array( int [], int);

int main(){
    int x[] = {1,2,3,4,5};
    int n = sizeof(x)/sizeof(n);
    int *p;
    p = array(x, n);

    printf("Array x\n");
    for(int i=0; i<n; i++){
        printf("%d\n",x[i]);
    }

    printf("Array p\n");
    for(int i=0; i<n; i++){
        printf("%d\n", p[i]);
    }
}

int *array(int x[], int n){
    int somma = 0;
    int *pa;

    pa = malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        somma = somma + x[i];
        pa[i] = somma;
    }

    return pa;
}
