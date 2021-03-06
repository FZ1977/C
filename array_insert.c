#include <stdio.h>
#include <stdlib.h>

/* Scrivere una funzione denominata array_insert che prende in input i 
*  parametri v, p, e dove il primo è un array_dinamico (come definito a 
*  lezione), il secondo è un intero p ed il terzo un float. 
*  La funzione deve inserire e in posizione p di v e restituire l'array 
*  modificato. La funzione può assumere che p rappresenti una posizione 
*  valida di v. Qual è il costo medio dell'operazione?
*/

struct array_dinamico{
	float *a; /* elemento da inserire */
	int c; /* capacità dell'array */
	int n; /* numero elementi nell'array */
};
typedef struct array_dinamico array_dinamico;

/* Definisco i prototipi delle funzioni */
array_dinamico array_init();
array_dinamico array_append( array_dinamico ad, float e );
void array_print( array_dinamico ad );
array_dinamico array_insert(array_dinamico ad, int p, float e);

void main(){
	int i;
	array_dinamico v = array_init(); /*  v = [] */
	v = array_append( v, 3.14 );     /* v.append(3.14) */
	for (i = 1; i < 10; i++){
		v = array_append( v, i*10+i );
	}
	printf("%d\n", v.n);
	array_print(v);
	array_insert( v, 0, -8);
	printf("%d\n", v.n);
	array_print(v);
}

/* 
 * Inserisce un nuovo elemento nella posizione p dell'array dinamico.
 * */
array_dinamico array_insert(array_dinamico ad, int p, float e){
	ad = array_append(ad, e);
	int cur_pos;
	
	cur_pos = ad.n-1;
	
	while(cur_pos > p){
		/* scambiare l'elemento in pos cur_pos con quello in pos cur_pos-1*/
		ad.a[cur_pos] = ad.a[cur_pos-1];
		cur_pos--;
	}
	ad.a[p] = e;
	
	return ad;
}

/*
 * Ritorna un array_dinamico vuoto
 * */
array_dinamico array_init(){
	array_dinamico ad = { NULL, 0, 0 };
	return ad;
}

/*
 * Aggiunge un nuovo elemento in fondo all'array dinamico
 * */
array_dinamico array_append( array_dinamico ad, float e ){
    float *b;
    int i;
    if ( ad.n == ad.c ) {
        ad.c = 1 + 2*ad.c;
        b = malloc(sizeof(float)*ad.c); /* O(1) */
        if(b!=NULL){
			for(i = 0; i < ad.n; i++){ /* O(n) */ 
				b[i] = ad.a[i]; /* copio l'array a[] su b[] */
			}
			free(ad.a); /* O(1) */
			ad.a = b;
		} else {
			return ad;
		}
    }
    ad.a[ad.n] = e;
    ad.n++;
    
    return ad;
}

void array_print( array_dinamico ad ){
	for(int i=0; i<ad.n; i++){
		printf("%d; a = %f\n", i, ad.a[i]);
	}
}
