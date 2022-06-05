/* Algoritmo INSERTION SORT */

#include <stdio.h>
#include <stdlib.h>

void stampa(int a[], int len);

int main(){
	int a[] = {6,5,3,1,8,7,2,4};
	
	int i=1, p=0, temp, len, min;
	
	len = sizeof(a)/sizeof(int);
	
	printf("La dimensione del vettore e' %d\n", len);
	stampa(a, len);
	printf("--> Vettore iniziale\n");
	
	if(i==1){
		if(a[i]<a[p]){
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
		}		
	}
	
	stampa(a,len);
	printf("\n");
	
	i++;
	p=i-1;
	
	while(i<len){
		min=i;
		while(p>=0){
			if(a[min]<a[p]){
				temp=a[p];
				a[p]=a[min];
				a[min]=temp;
			}
			p--;
			min=p+1;
		}
		
		i++;
		p=i-1;
		
		stampa(a,len);
		printf("\n");
	}
}


void stampa(int a[], int len){
	for(int i=0; i<len; i++){
		printf("%d ", a[i]);
	}
}
