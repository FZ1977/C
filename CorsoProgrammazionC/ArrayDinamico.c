/* Creo un programma che gestisce dinamicamente un array */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, *px, *sbuf, x;
    int n = 4;
    int i=0;

    p = malloc(n * sizeof(int));
    if(p == NULL){
        return -1;
    }

    sbuf = p + (n-1);
    px = p;

    for(x=0; x<6; x++){
        //printf("Inserisci valore: ");
        //scanf("%d",&x);
        //printf("%p - %p - (%d)\n",px,sbuf,(sbuf-px));
        if( (sbuf - px) > 1 ){
            printf("Inserimento in memoria num. %d.\n",i);
            *px = x;
            i++;
            px++;
        }
        else
        {
            i = 0;
            int *p_new, *px_new;
            n = 2 * n;
            printf("Alloco altro spazio - %d.\n",n);

            p_new = malloc(n * sizeof(int));

            if(p_new == NULL){
                return -1;
            }

            sbuf = p_new + (n - 1);
            px_new = p_new;

            // Qui copio i dati dal vecchio al nuovo
            while(p < px){
                printf("Copia in memoria num. %d.\n",i);
                *px_new = *p;
                px_new++;
                p++;
                i++;
            }

            printf("Inserimento in memoria num. %d.\n",i);
            *px_new = x;
            px_new++;

            p = p - i;
            i++;
            printf("Rimuovo la vecchia allocazione di memoria.\n");
            free(p);
            p = p_new; // Questo è da verificare dove si trova alla fine
            px = px_new;
        }
    }

    for(int i=0; i<(px - p); i++){
        printf("%d\n",p[i]);
    }
}
