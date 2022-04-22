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
int array_empty( array_dinamico ad );

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
	
	while(array_empty(v) == 0){
		v = array_pop(v);
	}
	printf("Array creato con la funzione empty.\n");
	array_print(v);
}

int array_empty( array_dinamico ad ){
	if (ad.n==0){
		return 1;
	}else {
		return 0;
	}
}

array_dinamico array_pop(array_dinamico ad){
	if(ad.n == 0){
		return ad;
	}
	if(4*ad.n < ad.c){
		/* dimezziamo la capacità */
		ad.a = realloc(ad.a, (ad.c/2 + 1)*sizeof(float));
		ad.c = ad.c/2 + 1;
	}
	ad.n--;

	return ad;
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
 * Possiamo rivedere la funzione array_append con la realloc.
 * */
array_dinamico array_append(array_dinamico ad, float e){
    int i;
    float *b;
    
    if ( ad.n == ad.c ) {
		ad.c = 1 * 2*ad.c;
		b = realloc(ad.a, sizeof(float)*ad.c); /* O(n) */
		if(b==NULL){
			return ad;
		}
		ad.a = b;
	}

    ad.a[ad.n] = e;
    ad.n++;
    return ad;
}

void array_print( array_dinamico ad ){
	printf("n = %d - c = %d\n",ad.n, ad.c);
	for(int i=0; i<ad.c; i++){
		printf("i=%d; a=%f\n", i, ad.a[i]);
	}
}
