/* Scrivi una funzione che  prende un array in ingresso e ritorna la somma
* dei valori contenuti nell'array.
*/

#include <stdio.h>

int somma(int [], int);

int main(){
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(n);

    printf("Somma = %d\n",somma(a,n));
}

int somma(int a[], int n){
    int somma = 0;
    int i;

    for(i=0; i<n; i++){
        somma = somma + a[i];
    }

    return somma;
}
