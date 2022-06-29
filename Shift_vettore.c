/*Shift a sinistra di un vettore*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	
	int i, temp=0, len=15;
	
	
	for(i=0; i<len; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	
	temp = a[0];
	
	for(i=1; i<len; i++){
		a[i-1]=a[i];
	}
	
	a[len-1] = temp;
	
	for(i=0; i<len; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
}
