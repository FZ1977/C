/*Esame 6*/

#include <stdio.h>
#include <stdlib.h>

int *x_array( int *a, int na, int *b, int nb );

int main(){
    int a[] = {1, 2, 3};
    int b[] = {10, 20, 30, 40};
    int *m;
    int i;

    m = x_array(a, 3, b, 4);

    for(i = 0; i < 12; i++){
            printf("%d ", *m);
            m++;
    }
}

int *x_array( int *a, int na, int *b, int nb ){
    int *m = malloc(sizeof(int)*(na*nb));
    int *p = m;
    int i, j;
    for(i = 0; i < na; i++){
            for(j = 0; j < nb; j++){
                *p = a[i]*b[j];
                p++;
            }
    }

    return m;
}
