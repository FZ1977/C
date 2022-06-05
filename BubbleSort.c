/* Algoritmo di ordinamento BUBBLE SORT */

#include <stdio.h>

void stampa(int a[], int len);

int main(){
	int a[]= {6,5,3,1,8,7,2,4};
	int i, step=1, len;
	
	len = sizeof(a)/sizeof(int);
	printf("Bubble Sort\n");
	printf("La dimensione del vettore e' %d\n", len);
	stampa(a, len);
	printf("--> Vettore iniziale\n");
	printf("\n");
	
	while(step<=len){
		for(i=0; i<len; i++){
			if(a[i]>a[i+1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		stampa(a,len);
		printf("\n");
		
		step++;
	}
}

void stampa(int a[], int len){
	for(int i=0; i<len; i++){
		printf("%d ", a[i]);
	}
}
