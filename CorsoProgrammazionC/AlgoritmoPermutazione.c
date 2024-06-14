#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void permuta(int *arr, int n);
void stampa(int *arr, int n);

int main(){
    int *arr; //il puntatore a int
    int n;//numero degli elementi
    scanf("%d",&n);//leggo gli elementi da inserire

    arr = calloc(n, sizeof(int));//istanzio l'array

    //leggo gli elemtni e li inserisco nell'array di elementi
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }

    //procedo con la permutazione
    for(int i=0; i<n; i++){
        permuta(arr,n);
        swap(&arr[0],&arr[i+1]);
    }

    return 0;
}

void swap(int *a, int *b){
    //funzione che scambia i valori
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void stampa(int *arr, int n){
    //funzione che stampa l'output a video
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void permuta(int *arr, int n){
    //funzione che esegue la permutazione
    for(int j=1; j<n; j++){
        for(int i=1; i<n-1; i++){
            swap(&arr[i], &arr[i+1]);
            stampa(arr,n);
        }
    }
}
