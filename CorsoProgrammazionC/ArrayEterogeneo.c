/*Esempio di array che contiene tipi di dati diversi
* Questo esempio utilizza un nuovo tipo di dato che
* si ottiene con le union con l'ausilio delle struct.
*/

#include <stdio.h>
#include <stdlib.h>

union elem{
    int val_i;
    float val_f;
    char *val_s;
};
typedef union elem elem;

struct array{
    elem e;
    char type;
};
typedef struct array array;

array Parse(char *);
int CercaPunto(char *);
void Stampa(array);

int main(int argc, char *argv[]){
    array *a = malloc((argc-1)*sizeof(elem));

    for(int i = 1; i < argc; i++){
        a[i-1] = Parse(argv[i]);
    }

    for(int i = 0; i < argc-1; i++){
        Stampa(a[i]);
    }
}

int CercaPunto(char *a){
    int i = 0;
    int n = 0;

    while(a[i] != '\0'){
        if(a[i] == '.'){
            n++;
        }
        i++;
    }

    if(n == 1){
        return 1;
    }

    if(n >= 2){
        return 0;
    }

    return 0;
}

array Parse(char *a){
    array obj;
    if(CercaPunto(a) == 0 && sscanf(a, "%d", &(obj.e.val_i)) == 1){
        obj.type = 'I';
    } else if(CercaPunto(a) == 1 && sscanf(a, "%f", &(obj.e.val_f)) == 1){
        obj.type = 'F';
    } else {
        obj.e.val_s = a;
        obj.type = 'S';
    }

    return obj;
}

void Stampa(array a){
    if(a.type == 'I'){
        printf("%d\n",a.e.val_i);
    }
    if(a.type == 'F'){
        printf("%.2f\n",a.e.val_f);
    }
    if(a.type == 'S'){
        printf("%s\n",a.e.val_s);
    }
}
