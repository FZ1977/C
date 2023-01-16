/*
Si vuole gestire una classe di studenti tramite un vettore di dimensione variabile di record,
dove i record hanno la seguente struttura:
struct elem
{
char *nome;
int eta;
};
Scrivere una funzione C che prende come parametro il numero di studenti da inserire e che
restituisce l’indirizzo del vettore leggendo da tastiera i nomi (non più lunghi di 20 caratteri) e
l’età degli studenti. Gestire eventuali errori nella fase di allocazione di memoria, restituendo
NULL in caso di errori, l’indirizzo del vettore in caso di successo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elem
{
	char *nome;
	int eta;
};

typedef struct elem elem;

elem *inserisci_studenti(elem vettore[], int n);

void main(){
	#define nstudenti 3
	elem studenti[nstudenti];
	elem *p;
	int i=0;
	p = inserisci_studenti(studenti, nstudenti);

	/*
	while(i<nstudenti){
		printf("%s - %d", p->nome, p->eta);
		i++;
		p++;
	}*/
	
	printf("%s - %d", p->nome, p->eta);

	return;
}

elem *inserisci_studenti(elem vettore[], int n){
	char *nome;
	int eta;
	/*
	vettore[0].nome="Fabio";
	vettore[1].nome="Elisa";
	vettore[2].nome="Paola";
	
	vettore[0].eta=45;
	vettore[1].eta=10;
	vettore[2].eta=44; */
	for(int i=0; i<n; i++){
		printf("Inserisci il nome: ");
		scanf("%s",&nome);
		vettore[i].nome = nome;
		printf("Inserisci eta: ");
		scanf("%d",&eta);
		vettore[i].eta = eta;
	}*/
	
	return vettore;
}
