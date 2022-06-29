/*Verificare se un vettore di interi e' ordinato*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f_ordinato_c(int *x);
int f_ordinato_d(int *x);

int main(){
	int a[] = {1,2,6,5,4,6,8,9,0,12,15,34,78,12,8,9};
	int b[] = {1,2,3,4,5,6,7,8,9};
	int c[] = {9,8,7,6,5,4,3,2,1};
	int res_1, res_2;
	res_1 = f_ordinato_c(c);
	res_2 = f_ordinato_d(c);
	
	if(res_1 == 0 || res_2 == 0){
		printf("Vettore ordinato.\n");
	} else {
		printf("Valore non ordinato.\n");
	}
}

int f_ordinato_c(int *x){
	int i, j=1, ord=1, len=0;
	
	for(i=0; x[i]!='\0'; i++){
		len++;
	}
	
	for(i=0; i<len-1; i++){
		printf("%d-%d\n",i,j);
		if(x[i]<=x[j]){
			ord = 0;
			j++;
		} else {
			return 1;
		}
	}
	return 0;
}

int f_ordinato_d(int *x){
	int i, j=1, ord=1, len=0;
	
	for(i=0; x[i]!='\0'; i++){
		len++;
	}
	
	for(i=0; i<len-1; i++){
		printf("%d-%d\n",i,j);
		if(x[i]>=x[j]){
			ord=0;
			j++;
		} else {
			return 1;
		}
	}
	
	return 0;
}
