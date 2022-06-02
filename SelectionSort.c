/*Selection sort*/

/*
 * dato un array di dimensione n si esegue il riordinamento on place
 * cercando il numero più piccolo che viene spostato all'i-esimo posto
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	int a[]={30,2,40,5,18,20,4,6,6,3,100,200,50,25};
	int i, s=0, temp;
	
	len = sizeof(a)/sizeof(int);
	
	printf("La dimensione del vettore e' %d\n", len);
	
	for(int x=0; x<len; x++){
		printf("%d ", a[x]);
	}
	printf("--> Vettore iniziale\n");
	
	while(s<len){
		for(i=s+1; i<len; i++){
			if(a[s] > a[i]){
				temp = a[s];
				a[s] = a[i];
				a[i] = temp;
			}
		}
		s++;
		for(int x=0; x<len; x++){
			printf("%d ", a[x]);
		}
		printf("\n");
	}
}
