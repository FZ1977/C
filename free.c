#include <stdio.h>
#include <stdlib.h>

struct vettore{
	int *a;
	int n;
	int c;
};

typedef struct vettore vettore;

vettore init_vettore(){
	vettore v = {NULL, 0, 0};
	return v;
}

vettore append_vettore( vettore v, int e ){
	int *b;
	if(v.n == v.c){
		v.c = 1+2*v.c;
		b=malloc(sizeof(int)*v.c);
		for(int i=0; i<v.n; i++){
			b[i]=v.a[i];
		}
		free(v.a);
		v.a=b;
	}
	v.a[v.n] = e;
	v.n++;
	
	return v;
}

void vprint( vettore v ){
	for(int i=0; i<v.c; i++){
		printf("valore_elemento=%d, numero_elementi=%d, capacita'_vettore=%d\n", v.a[i], v.n, v.c);
	}
}

void main(){
	vettore v = init_vettore();
	for(int i=0; i<100; i++){
		v = append_vettore(v, i);
		printf("\n");
		vprint(v);
	}
}
