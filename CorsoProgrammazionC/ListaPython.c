/*
* Con l'utilizzo delle struct e dei puntatori creo un programma che simula la lista di Python.
*/

#include <stdio.h>
#include <stdlib.h>

struct lista{
    float *p; // Puntatore alla lista
    int NumeroElementi; // Numero di elementi della lista
    int Capacita; // Indice della lista
};

typedef struct lista lista;

lista CreaLista(int);
lista SetLista(lista, int, float);
float GetLista(lista, int);
lista AppendLista(lista, float);
void StampaLista(lista);
lista PopLista(lista);
lista InsertLista(lista, int, float);
lista DeleteLista(lista, int);

int main(){
    // Creazione - creo la lista
    // Set - imposta un valore della lista in un determinato indice
    // Get - prendo un valore della lista da un determinato indice
    // Append - aggiungo un valore alla fine della lista
    // Pop - rimuovo il valore alla fine della lista
    // Mostra - stampa i valori della lista
    // Insert - Inserisce un valore in un punto della lista
    // Delete - Elimina un elemento della lista in una posizione indicata
    // Len - Ritorna la lunghezza della lista

    lista MyLista;
    float valore;

    // Creazione lista
    printf("#### CREA ####\n");
    MyLista = CreaLista(4);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);

    printf("#### SET ####\n");
    MyLista = SetLista(MyLista,0,3.14);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);

    printf("#### GET ####\n");
    valore = GetLista(MyLista,0);
    printf("Valore nella posizione %d = %.2f\n",0,valore);
    StampaLista(MyLista);

    printf("#### APPEND ####\n");
    MyLista = AppendLista(MyLista,2.71);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);

    printf("#### APPEND ####\n");
    MyLista = AppendLista(MyLista,1.0);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);

    printf("#### POP ####\n");
    MyLista = PopLista(MyLista);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);

    printf("#### INSERT ####\n");
    MyLista = InsertLista(MyLista,1,4.0);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);
    printf("\n");

    printf("#### DELETE ####\n");
    MyLista = DeleteLista(MyLista,1);
    printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
    StampaLista(MyLista);
    printf("\n");

    for(int i=0; i<17; i++){
        MyLista = AppendLista(MyLista,i * 2);
        printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
        StampaLista(MyLista);
    }

    for(int i=0; i<17; i++){
        MyLista = PopLista(MyLista);
        printf("Numero Elementi: %d, Capacita: %d\n",MyLista.NumeroElementi, MyLista.Capacita);
        StampaLista(MyLista);
    }

    return 0;
}

lista DeleteLista(lista Lista, int i){
    int n = Lista.NumeroElementi;
    for(; i < n; i++){
        Lista.p[i] = Lista.p[i+1];
    }

    Lista.NumeroElementi--;

    return Lista;
}

lista InsertLista(lista Lista, int i, float valore){
    int n = Lista.NumeroElementi;
    if(Lista.NumeroElementi<Lista.Capacita){
        for(; n >= i; n--){
            Lista.p[n+1] = Lista.p[n];
        }
        Lista.p[i] = valore;
        Lista.NumeroElementi++;
    }

    return Lista;
}

lista PopLista(lista Lista){
    Lista.NumeroElementi--;

    if(Lista.NumeroElementi < Lista.Capacita / 2){
        Lista.p = realloc(Lista.p, (Lista.Capacita/2)*sizeof(float));
        Lista.Capacita = Lista.Capacita/2;
    }

    return Lista;
}

void StampaLista(lista Lista){
    for(int i=0; i<Lista.NumeroElementi; i++){
        printf("%.2f ", Lista.p[i]);
    }
    printf("\n");
}

lista CreaLista(int n){
    /* Creo una nuova lista */
    lista NuovaLista;
    NuovaLista.NumeroElementi = 0;
    NuovaLista.Capacita = n;
    NuovaLista.p = malloc(n*sizeof(float));

    return NuovaLista;
}

lista SetLista(lista Lista, int i, float valore){
    /* Setto un valore x della lista in una posizione i della lista */
    if(i<Lista.Capacita){
        Lista.p[i] = valore;
        Lista.NumeroElementi++;
    }
    else
    {
        printf("Valore oltre le dimensioni della lista.\n");
    }

    return Lista;
}

float GetLista(lista Lista, int i){
    /* Stampo un valore x preso nella posizione i della lista */
    return Lista.p[i];
}

int LenLista(lista Lista){
    return Lista.NumeroElementi;
}

lista AppendLista(lista Lista, float valore){
    float *b;
    int i;

    if(Lista.NumeroElementi < Lista.Capacita){
        Lista.p[Lista.NumeroElementi] = valore;
        Lista.NumeroElementi++;
    }
    else
    {
        Lista.Capacita  = 2 * Lista.Capacita;
        b = malloc(Lista.Capacita*sizeof(float));
        for(i = 0; i <= Lista.NumeroElementi; i++){
            b[i] = Lista.p[i];
        }

        b[Lista.NumeroElementi] = valore;
        Lista.NumeroElementi++;
        Lista.p = b;
    }

    return Lista;
}
