/* Esercizio strutture puntatori */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NMAX 4
#define MAX 50

struct studente{
	char nome[MAX]; 
	char cognome[MAX];
	int matricola, crediti;
	float media;
};

typedef struct studente studente;

int main(void){
	int i;
	studente elenco[NMAX];
	
	strcpy(elenco[0].nome,"Fabio");
	strcpy(elenco[0].cognome,"Zangari");
	elenco[0].matricola=315235;
	elenco[0].crediti=6;
	elenco[0].media=25;
	
	strcpy(elenco[1].nome,"Elisa");
	strcpy(elenco[1].cognome,"Zangari");
	elenco[1].matricola=315236;
	elenco[1].crediti=180;
	elenco[1].media=30;
	
	strcpy(elenco[2].nome,"Paola");
	strcpy(elenco[2].cognome,"Brusco");
	elenco[2].matricola=315237;
	elenco[2].crediti=90;
	elenco[2].media=29;
	
	strcpy(elenco[3].nome,"Maui");
	strcpy(elenco[3].cognome,"Zangari");
	elenco[3].matricola=315233;
	elenco[3].crediti=180;
	elenco[3].media=27;
	
	strcpy(elenco[4].nome,"Fabio_4");
	strcpy(elenco[4].cognome,"Zangari");
	elenco[4].matricola=315239;
	elenco[4].crediti=6;
	elenco[4].media=25;
	
	for(i = 0; i<NMAX; i++){
		printf("===============\n");
		printf("Nome: %s\n", elenco[i].nome);
		printf("Cognome: %s\n", elenco[i].cognome);
		printf("Matricola: %d\n", elenco[i].matricola);
		printf("Crediti: %d\n", elenco[i].crediti);
		printf("Media: %f\n", elenco[i].media);
	}
}
