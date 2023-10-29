#include <stdio.h>

int main(int argc, char *argv[]){
    int vettore[]={0,1,2,3,4,5,6,7,8,9};
    int vettore_inv[11];
    int indice=0;

    printf("Vettore iniziale.\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",vettore[i]);
    }

    printf("\n");

    for(int i=9;i>=0;i--)
    {
        vettore_inv[indice]=vettore[i];
        indice++;
    }

    printf("Vettore finale.\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",vettore_inv[i]);
    }

    return 0;
}
