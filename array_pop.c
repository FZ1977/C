#include <stdio.h>
#include <stdlib.h>

/*
* Scrivere una funzione denominata array_pop che prende in input un 
* array dinamico v ed elimina da v l'elemento in coda.
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
array_dinamico array_pop(array_dinamico ad);

void main(){
	int i;
	array_dinamico v = array_init(); /*  v = [] */
	v = array_append( v, 3.14 );     /* v.append(3.14) */
	for (i = 1; i < 10; i++){
		v = array_append( v, i*10+i );
	}
	printf("Array creato con la funzione append.\n");
	array_print(v);
	v=array_insert( v, 5, 12.34);
	printf("Array modificato con la funzione insert.\n");
	array_print(v);
	v=array_pop(v);
	printf("Array modificato con la funzione pop.\n");
	array_print(v);
	v=array_append( v, 3.14 );
	printf("Array creato con la funzione append.\n");
	array_print(v);
}

array_dinamico array_pop(array_dinamico ad){
	ad.n--;
	ad.a[ad.n] = 0;

	return ad;
}

/* 
 * Inserisce un nuovo elemento nella posizione p dell'array dinamico.
 * */
array_dinamico array_insert(array_dinamico ad, int p, float e){
	/* Il costo della funzione è costante. */
	if( p < ad.c ){ /* O(1) */
		ad.a[p] = e; /* O(1) */
	} else { 
		printf("Valore della posizione errato!!!\n");
	}
	
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
array_dinamico array_append(array_dinamico ad, float e){
    float *b;
    int i;
    if ( ad.n == ad.c ) {
        ad.c = 1 + 2*ad.c;
        b = malloc(sizeof(float)*ad.c); /* O(1) */
        for(i = 0; i < ad.n; i++){ /* O(n) */ 
            b[i] = ad.a[i]; /* copio l'array a[] su b[] */
        }
        free(ad.a); /* O(1) */
        ad.a = b;
    }
    ad.a[ad.n] = e;
    ad.n++;
    
    return ad;
}

void array_print( array_dinamico ad ){
	//printf("%d\n",ad.c);
	for(int i=0; i<ad.c; i++){
		printf("i=%d; c=%d; a=%f\n", i, ad.c, ad.a[i]);
	}
}
