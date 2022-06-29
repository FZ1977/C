/* ricerca elemento nel vettore */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f_cerca(float x, float *a);

int main(){	
	float a[] = {4,2,6,7,3.14,2.71};
	float x = 6; /*valore da cercare*/
	f_cerca(x, a);
}

int f_cerca(float x, float *a){
	int i;
	
	for(i=0; a[i]!='\0'; i++){
		if(a[i]==x){
			printf("Valore %f trovato.\n", x);
			return 0;
		} 
	}
	printf("Valore %f non trovato.\n", x);
	return 1;
}
