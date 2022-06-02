/* Algoritmo INSERTION SORT */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = {6,5,3,1,8,7,2,4};
	
	int i=1, p, temp, len;
	
	len = sizeof(a)/sizeof(int);
	
	printf("La dimensione del vettore e' %d\n", len);
	
	for(int x=0; x<len; x++){
		printf("%d ", a[x]);
	}
	printf("--> Vettore iniziale\n");
	
	while(i<len){
		for(p=0; p<i; p++){
			if(a[p]>a[i]){
				temp = a[p];
				a[p] = a[i];
				a[i] = temp;
			}
		}
		i++;
		for(int x=0; x<len; x++){
			printf("%d ", a[x]);
		}
		printf("\n");
	}

}
