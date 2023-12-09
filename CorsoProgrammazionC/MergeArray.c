/* Creare una funzione che prende in input due array ordinati e ritorna
*  un array ordinato.
*/

#include <stdio.h>
#include <stdlib.h>

int * MergeArray(int *, int, int *, int);

int main(){
    int a[] = {1,3,5,7,9};
    int b[] = {2,4,6,8};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    int *p;

    // passo le due liste dalla funzione
    p = MergeArray(a, n, b, m);
    p = p - (m + n);

    printf("Qui uso la sintassi cone indice.\n");
    for(int i=0; i<(n+m); i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    printf("Qui uso la sintassi con puntatori.\n");
    for(int i=0; i<(n+m); i++){
        printf("%d ",*p);
        p++;
    }
    p = p - (m + n);
}

int * MergeArray(int *a, int n, int *b, int m){
    int i = 0, j = 0;
    int *p;
    p = malloc((n+m)*sizeof(int));

    while(i<n && j<m){
        if(*a > *b){
            *p = *b;
            p++;
            b++;
            j += 1;
        }
        else
        {
            *p = *a;
            p++;
            a++;
            i += 1;
        }
    }

    if(i < n){
        for(; i<n; i++){
            *p = *a;
            p++;
            a++;
            i++;
        }
    }

    if(j < m){
        for(; i<m; j++){
            *p = *b;
            p++;
            b++;
            j++;
        }
    }

    return p;
}
