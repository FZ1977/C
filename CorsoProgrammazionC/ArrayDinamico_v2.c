/*Programma che simula una lista python utilizzando un array dinamico in c.*/

#include <stdio.h>
#include <stdlib.h>

struct sequenza {
    float *val; // valore da inserire
    int n; // numero di elementi nella sequenza
    int c; // capacità della sequenza
};

typedef struct sequenza sequenza;

sequenza Set(sequenza, int, int);
sequenza Append(sequenza, float);
sequenza Insert(sequenza, int, float);
sequenza Pop(sequenza);
sequenza Remove(sequenza, int);
int Cerca(sequenza, float);
void Stampa(sequenza);
int Len(sequenza);

int main(){
    sequenza s;
    int pos = 0;
    s = Set(s,2,0);
    for(int i=0; i<16; i++){
        s=Append(s, 2*i);
        Stampa(s);
    }

    printf("===============\n");
    s = Insert(s, 5, 3.14);
    Stampa(s);
    printf("===============\n");
    s = Remove(s, 8);
    Stampa(s);
    printf("===============\n");
    printf("Count %d\n", Len(s));
    printf("===============\n");
    pos = Cerca(s,3);
    if(pos >= 0){
        printf("Posizione %d\n",pos);
    }
    else
    {
        printf("Valore non presente.\n");
    }
    printf("===============\n");

    pos = Cerca(s,3.14);
    if(pos >= 0){
        printf("Posizione %d\n",pos);
    }
    else
    {
        printf("Valore non presente.\n");
    }
    printf("===============\n");

    while(s.n > 1){
        s=Pop(s);
        Stampa(s);
    }
}

int Cerca(sequenza s, float val){
    int i;
    for(i = 0; i < s.n; i++){
        if(s.val[i] == val){
            return i;
        }
    }

    return -1;
}

int Len(sequenza s){
    return s.n;
}

sequenza Remove(sequenza s, int pos){
    /*Rimuove il valore dalla posizione indicata*/
    int i;
    if(s.n != 0 && pos < s.n){
        for(i = pos; i < s.n; i++){
            s.val[i] = s.val[i+1];

        }
    }
    if(s.n < s.c/2){
        s.c /= 2;
        s.val = realloc(s.val, s.c*sizeof(float));
    }
    s.n--;
    return s;
}

sequenza Insert(sequenza s, int pos, float val){
    /*Inserisce un valore nella posizione indicata*/
    int i;
    if(s.n == 0){
        s.val[0] = val;
        s.n++;

        return s;
    }

    if(s.n < s.c && s.n != 0)
    {
        for(i = s.n; i > pos; i--){
            s.val[i] = s.val[i-1];
        }
        s.val[pos] = val;
    }
    else
    {
        s.c *= 2;
        s.val = realloc(s.val,s.c*sizeof(float));
        for(i = s.n; i > pos; i--){
            s.val[i] = s.val[i-1];
        }
        s.val[pos] = val;
    }
    s.n++;
    return s;
}

sequenza Set(sequenza s, int c, int n){
    /*Crea una sequenza vuota*/
    s.n = n;
    s.c = c;
    s.val = malloc(s.c * sizeof(float));

    return s;
}

void Stampa(sequenza s){
    /*Stampa i valori contenuti nella sequenza*/
    printf("c=%d n=%d\n",s.c, s.n);
    for(int i=0; i<s.n; i++){
        printf("%.2f ",s.val[i]);
    }
    printf("\n");
}

sequenza Append(sequenza s, float val){
    /*Inserisce un elemento alla fine della sequenza*/
    if(s.n < s.c){
        s.val[s.n] = val;
    }
    else
    {
        s.c *= 2;
        s.val = realloc(s.val, s.c*sizeof(float));
        s.val[s.n] = val;
    }

    s.n++;
    return s;
}

sequenza Pop(sequenza s){
    /*Rimuove un elemento dalla fine della sequenza*/
    if(s.n < s.c/2){
        s.c /= 2;
        s.val = realloc(s.val, s.c*sizeof(float));
    }

    s.n--;
    return s;
}
