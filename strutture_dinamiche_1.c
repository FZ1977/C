/* Strutture dinamiche 1 */
/* Realizzo un array dinamico */

#include <stdio.h>
#include <stdlib.h>

/* Realizziamo una struttura che contiene i seguenti elementi */

struct array_dinamico{
	float *valore; /* valore da inserire */
	int n; /* numero di elementi inseriti nell'array */
	int c; /* capacità complessiva dell'array */
};

/* Definisco un alias per richiamarla più facilmente */
typedef struct array_dinamico array_dinamico;

/* Definisco i prototipi delle funzioni */
array_dinamico init_ad();
array_dinamico append_elem(array_dinamico ad, float val);
void print_ad(array_dinamico);

void main(){
	array_dinamico v_ad = init_ad(); /* definisco un vettore di array_dinamico */
	v_ad = append_elem(v_ad, 3.14);
	print_ad(v_ad);
	v_ad = append_elem(v_ad, 2.718);
	print_ad(v_ad);
	for(int i=2; i<20; i++){
		v_ad = append_elem(v_ad, 1.234*5+i);
		print_ad(v_ad);
	}
	
}

array_dinamico init_ad(){
	array_dinamico ad = {NULL,0,0};
	return ad;
}

array_dinamico append_elem(array_dinamico ad, float val){
	float *p;
	int i;
	if(ad.n == ad.c){
		ad.c = 1 + 2*ad.c;
		p = malloc(sizeof(float)*ad.c);
		for(i=0; i<ad.n; i++){
			p[i] = ad.valore[i];
		}
		free(ad.valore);
		ad.valore = p;
	}
	ad.valore[ad.n] = val;
	ad.n++;
	
	return ad;
}

void print_ad(array_dinamico ad){
	int i;
	/*
	for(i=0; i<ad.n; i++){
		printf("n.elem: %d - capacita': %d - valore: %f\n", ad.n, ad.c, ad.valore[i]);
	}
	*/
	printf("n.elem: %d - capacita': %d - valore: %f\n", ad.n, ad.c, ad.valore[ad.n-1]);
}
