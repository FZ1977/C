/* Array a più dimensioni o matrici. 
 * in particolare array a 2 dimensioni
 * */
#include <stdio.h>
#include <stdlib.h>

void print_array2d_bad(int a[][3], int nr);

void print_array2d(int *a, int nc, int nr);

void main(){
	int a[2][3] = {1, 9};
	int b[] = {10, 11, 12, 13};
	int c2[][2] = {20, 21, 22, 23, 24, 25}; /* matrice due colonne e tre righe */
	int c3[][3] = {20, 21, 22, 23, 24, 25}; /* matrice tre colonne e due righe */
	int d[] = {30, 31, 32, 33, 34, 35};
	int nr_d = 2, nc_d = 3;
	int i, j, k;
	int nr, nc;
	nr = 2;
	nc = 3;
	k = 2;
	
	for(i=0; i<nr; i++){
		for(j=0; j<nc; j++){
			printf("%d, ", a[i][j]);
		}
		printf("\n");
	}
	printf("=============\n");
	printf("%d\n",b[k]);
	printf("=============\n");
	for(i=0; i<nr_d; i++){
		for(j=0; j<nc_d; j++){
			printf("%d, ", d[i*nc_d+j]);
		}
		printf("\n");
	}
	printf("=============\n");
	print_array2d(d, 2, 3);
	printf("=============\n");
	print_array2d(d, 3, 2);
}


void print_array2d_bad(int a[][3], int nr){
	/* stampa matrici di 3 colonne, troppo specifica! */
	/* il parametro nr indica il numero di righe */
}

void print_array2d(int *a, int nc, int nr){
	int i, j;
	for(i=0; i<nr; i++){
		for(j=0; j<nc; j++){
			printf("%d, ", a[i*nc+j]);
		}
		printf("\n");
	}
}
