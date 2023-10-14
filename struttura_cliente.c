#include <stdio.h>
#include <stdlib.h>

struct datadinascita{
    int giorno;
    int mese;
    int anno;
};

struct cliente{
    char nome[50];
    char cognome[50];
    struct datadinascita datadinascita;
};

typedef struct cliente cliente;

void main(){
    int i=0;
    cliente cliente1;
    char *nome="Mario";
    char *cognome="Rossi";

    cliente1.datadinascita.giorno = 9;
    cliente1.datadinascita.mese = 12;
    cliente1.datadinascita.anno = 1990;

    while(*nome != '\0'){
        cliente1.nome[i]=*nome;
        nome++;
        i++;
    }

    i=0;
    while(*cognome != '\0'){
        cliente1.cognome[i]=*cognome;
        cognome++;
        i++;
    }

    printf("Nome: %s Cognome: %s nato il: %d/%d/%d",cliente1.nome, cliente1.cognome, cliente1.datadinascita.giorno, cliente1.datadinascita.mese, cliente1.datadinascita.anno);
}
