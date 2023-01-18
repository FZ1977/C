#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, size=5, diff=0, new_size=0;
    int *a;
    
    a = malloc(sizeof(int)*size);
    
    for(int i=0; i<10; i++){
        if(size-i<2){
            printf("Estendo la dimensione del buffer.\n");
            new_size = size*2;
            p = malloc(sizeof(int)*new_size);
            printf("Dimensione del buffer: %d\n", new_size);
            printf("Eseguo la copia degli elementi nel nuovo buffer.\n");
            for(int j=0; j<size; j++){
                p[j]=a[j];
            }
            size = new_size;
            free(a); //libero la memoria;
            a = p;
            p = NULL;
        }
        printf("Copio %d nel buffer.\n", i);
        a[i]=i;
    }
    
    
    for(int i=0; i<size; i++){
        printf("Valori di a[%d]: %d\n", i, a[i]);
    }
    
    return 0;
}