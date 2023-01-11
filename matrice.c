/* Struttura dati per definire una matrice */

#include <stdio.h>
#include <stdlib.h>

struct matrice{
	float *a;
	int nr, nc;
};

typedef struct matrice matrice;

matrice matrice_init(int nr, int nc);
void matrice_print(matrice m);

void main(){
	matrice m = matrice_init(3,2);
	
	matrice_print(m);
	
	int k = 5;
	int i = k/m.nc; /* indice Riga in m dell'elemento in posizione k di m.a */
	int j = k%m.nc; /* indice Colonna in m dell'elemento in posizione di m.a */
}

matrice matrice_init(int nr, int nc){
	int i;
	matrice m;
	m.nr=nr;
	m.nc=nc;
	m.a = malloc(sizeof(float)*nr*nc);
	for(i=0; i< m.nr * m.nc; i++){
		m.a[i] = 0;
	}
	return m;
}

void matrice_print(matrice m){
	int i, j;
	for(i=0; i<m.nr; i++){
		for(j=0; j<m.nc; j++){
			printf("%f ", m.a[i*m.nc+j]);
		}
		printf("\n");
	}
}
