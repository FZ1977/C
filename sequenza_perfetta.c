#include <stdio.h>
#include <stdlib.h>

int verifica(int *x);

void main(){
	int x[] = {1,9,1,2,1,8,2,4,6,2,7,9,4,5,8,6,3,4,7,5,3,9,6,8,3,5,7};
	int res;
	res = verifica(x);
	
	if(res==1){
		printf("Il vettore contiene una sequenza perfetta.\n");
	} else {
		printf("Il vettore non contiene una sequenza perfetta.\n");
	}
}

int verifica(int *x){
	int i;
	int *conta;
	
	conta = malloc(sizeof(int)*(10));
	
	for(int j=0; j<10; j++){
		conta[j]=0;
	}
	
	for(i=0; i<27; i++){
		if(conta[x[i]]==2){
			conta[x[i]]++;
		} else if(x[i]==x[i+x[i]+1] && conta[x[i]]<3 && (27-i)>=x[i]+1){
			conta[x[i]]++;
		} else if(x[i]==x[i+x[i]+1] && conta[x[i]]<3 && (27-i)<=x[i]+1) {
			conta[x[i]]++;
		} else {
			return 0;
		}
	}

	int perfetta=0;
	for(int j=1; j<10; j++){
		if(conta[j]==3){
			perfetta=1;
		} else {
			return 0;
		}
	}
	return perfetta;
}
