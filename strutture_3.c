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
	studente elenco[NMAX];
	studente *p_el[NMAX] = {NULL, NULL, NULL, NULL};
	
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
	
	for(int i=0; i<NMAX; i++){
		p_el[i] = malloc(sizeof(studente));
		p_el[i] = &elenco[i];
	}
	
	printf("Utilizzo il vettore di struct.\n");
	for(int c = 0; c<NMAX; c++){
		printf("===============\n");
		printf("Nome: %s\n", elenco[c].nome);
		printf("Cognome: %s\n", elenco[c].cognome);
		printf("Matricola: %d\n", elenco[c].matricola);
		printf("Crediti: %d\n", elenco[c].crediti);
		printf("Media: %f\n", elenco[c].media);
	}
	
	printf("Utilizzo i puntatori di struct.\n");
	for(int x = 0; x<NMAX; x++){
		printf("===============\n");
		printf("Nome: %s\n", p->nome);
		printf("Cognome: %s\n", p_el->cognome);
		printf("Matricola: %d\n", p_el->matricola);
		printf("Crediti: %d\n", p_el->crediti);
		printf("Media: %f\n", p_el->media);
		p_el = p_el + x;
	}
	
}
