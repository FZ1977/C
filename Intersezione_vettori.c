/*Intersezioni tra due vettori*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *intersezione(int *a, int *b);
int *elimina_doppi(int *c, int occorrenze);
int conta_elementi(int *a, int *b);

void main(){
	int b[5]={1,4,6,7,6};
	int a[6]={1,2,5,7,8,6};
	int i, *c, *c_senza_doppi, occorrenze;
	
	c=malloc(sizeof(int)*(11));
	
	c=intersezione(a, b);
	occorrenze = conta_elementi(a, b);
	
	c_senza_doppi=malloc(sizeof(int)*(occorrenze));
	
	c_senza_doppi = elimina_doppi(c, occorrenze);
	
	for(i=0;i<occorrenze;i++){
		printf("%d ",c_senza_doppi[i]);
	}
}

int conta_elementi(int *a, int *b){
	int i, j, occorrenze=0;
	
	for(i=0; i<6; i++){
		for(j=0; j<5; j++){
			if(a[i]==b[j]){
				occorrenze++;
			}
		}
	}
	
	return occorrenze;
}

int *intersezione(int *a, int *b){
	int i, j, x=0;
	
	int *c = malloc(sizeof(int)*(11));
	
	for(i=0; i<6; i++){
		for(j=0; j<5; j++){
			if(a[i]==b[j]){
				c[x]=a[i];
				x++;
			}
		}
	}
	
	return c;
}

int *elimina_doppi(int *c, int occorrenze){
	int i=0, j, x=0, occ=0;
	
	int *c_appo = malloc(sizeof(int)*(occorrenze));
	
	if(x==0 && i==0){
		c_appo[0]=c[0];
		x++;		
	}
	
	for(i=0; i<occorrenze; i++){
		for(j=0;j<x;j++){
			if(c[i]==c_appo[j]){
				occ++;
			}
		}
		if(occ==0 && i!=0){
			c_appo[x]=c[i];
			x++;
		} else {
			x++;
		}
		occ=0;
	}
	
	return c_appo;
}
