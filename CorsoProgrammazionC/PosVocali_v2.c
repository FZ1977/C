/*Scrivere una funziona che preso in input una stringa ritorna
* il una sequenza che contiene la posizione delle vocali.
* Questa versione del programma utilizza gli array dinamici.
*/

#include <stdio.h>
#include <stdlib.h>

struct sequenza{
    int *p;
    int n;
    int c;
};

typedef struct sequenza sequenza;

sequenza NewSeq();
sequenza SetSeq();
sequenza AppendSeq(sequenza, int);

int main(){
    sequenza s = NewSeq();
    s = SetSeq();

    int i = 0, n = 0;
    char *stringa = "Programmazione dei calcolatori elettronici.";

    while(stringa[i] != '\0'){
        if(stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u'){
            s = AppendSeq(s, i);
        }
        if(stringa[i] == 'A' || stringa[i] == 'E' || stringa[i] == 'I' || stringa[i] == 'O' || stringa[i] == 'U'){
            s = AppendSeq(s, i);
        }
        i++;
    }

    printf("%s\n", stringa);
    for(; n < s.n; n++){
        printf("%d ", s.p[n]);
    }
}

sequenza NewSeq(){
    sequenza s;
    return s;
}

sequenza SetSeq(){
    sequenza s;
    s.c = 2;
    s.n = 0;
    s.p = malloc(s.c * sizeof(int));

    return s;
}

sequenza AppendSeq(sequenza s, int v){
    if(s.n < s.c){
        s.p[s.n] = v;
        s.n++;
    }
    else
    {
        s.c *= 2;
        s.p = realloc(s.p, s.c*sizeof(int));
        s.p[s.n] = v;
        s.n++;
    }

    return s;
}
