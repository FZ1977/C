/* Ancora qualche esempio con le strutture, gli array e i puntatori */

#include <stdio.h>
#include <stdlib.h>

struct array_item{
	void *p;
	char tipo;
};

typedef struct array_item array_item;

void set_item_int( array_item *, int v );
void set_item_float( array_item *, float v );
void set_item_char( array_item *, char v );
void print_item( array_item a[], int n );

void main(){
	int n=3;
	array_item a[n];
	array_item *p;
	
	p=a;
	/*
	a[0].tipo = 'd';
	a[0].p = malloc(sizeof(int));
	*(int*)(a[0].p)=2;
	*/
	
	/*
	a[1].tipo = 'f';
	a[1].p = malloc(sizeof(float));
	*(float*)(a[1].p)=3.14;
	*/
	set_item_int( p+0, 2 );
	set_item_float( p+1, 3.14 );
	set_item_char( p+2, 'x' );
	
	print_item(a, n);
	/*
	printf("tipo = %c - valore = %d\n", a[0].tipo, *(int*)(a[0].p) );
	printf("tipo = %c - valore = %f\n", a[1].tipo, *(float*)(a[1].p) );
	printf("tipo = %c - valore = %c\n", a[2].tipo, *(char*)(a[2].p) );
	*/
	//free(a[0].p);
	//free(a[1].p);
}

void set_item_int( array_item *p, int v ){
	p->tipo = 'd';
	p->p = malloc(sizeof(int));
	*(int*)(p->p)=v;
}

void set_item_float( array_item *p, float v ){
	p->tipo = 'f';
	p->p = malloc(sizeof(float));
	*(float*)(p->p)=v;
}

void set_item_char( array_item *p, char v ){
	p->tipo = 'c';
	p->p = malloc(sizeof(char));
	*(char*)(p->p)=v;
}

void print_item( array_item a[], int n ){
	int i;
	
	for(i=0; i<n; i++){
		if(a[i].tipo == 'd'){
			printf("tipo = %c - valore = %d\n", a[i].tipo, *(int*)(a[i].p) );
		} else if(a[i].tipo == 'f'){
			printf("tipo = %c - valore = %f\n", a[i].tipo, *(float*)(a[i].p) );
		} else if(a[i].tipo == 'c'){	
			printf("tipo = %c - valore = %c\n", a[i].tipo, *(char*)(a[i].p) );
		}
	}
}
