/*Scrivere una funziona che preso in input una stringa ritorna
* il una sequenza che contiene la posizione delle vocali.
*/

#include <stdio.h>
#include <stdlib.h>

int * PosizioneVocali(char *, int);
int ContaVocali(char *);

int main(){
    char *a = "strInga";
    int *c, n;

    n = ContaVocali(a);
    c = PosizioneVocali(a, n);

    printf("Stringa = %s\n", a);
    printf("Posizione delle vocali: ");
    for(int i=0; i<n; i++){
        printf("%d ",c[i]);
    }
}

int ContaVocali(char *a){
    int n, i;

    n = 0;
    i = 0;

    while(a[i] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            n++;
        }

        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            n++;
        }

        i++;
    }

    return n;
}

int * PosizioneVocali(char *a, int n){
    int i, j;
    int *p;

    p = malloc(n * sizeof(int));

    i = 0;
    j = 0;

    while(a[i] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            p[j] = i;
            i++;
            j++;
        }

        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            p[j] = i;
            i++;
            j++;
        }

        i++;
    }

    return p;
}
