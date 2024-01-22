/*Esame 3*/
#include <stdio.h>
#include <stdlib.h>

struct array_int {
    int *a;
    int n;
};
typedef struct array_int array_int;

array_int posizione_vocali(char *s);

int main(){
    char a[]="Algoritmi";
    array_int x;
    x = posizione_vocali(a);
    for(int i = 0; i<x.n; i++){
        printf("%d ",x.a[i]);
    }
    printf("\n");
    printf("%d",x.n);
}

array_int posizione_vocali(char *s){
    int i = 0;
    int j = 0;
    array_int x;

    x.n = 0;

    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            x.n++;
        }
        i++;
    } // O(n) il costo di questa iterazione

    x.a = malloc(sizeof(int)*(x.n)); // O(n) costo memoria supplementare
    i = 0;
    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            x.a[j] = i;
            j++;
        }
        i++;
    } // O(n) costo di questa iterazione

    /* Il costo totale di computazione è pari a O(n) lineare rispetto a n

    return x;
}
