/* ricorsione vs iterazione */

#include <stdio.h>

int f_somma(int n);

void main(){
	int i, n=10, res_iter=0, res_ric=10;
	
	for(i=0; i<n+1; i++){
		res_iter += i;
	}
	
	printf("Somma iterativa: %d\n", res_iter);
	
	if( n < 1 ){
		printf("%d\n", res_ric);
	} else {
		res_ric = f_somma(n);
		printf("Somma ricorsiva: %d\n", res_ric);
	}
}

int f_somma(int n){
	if(n < 1){
		return n;
	}else {
		return n = n + f_somma(n-1);
	}
}
