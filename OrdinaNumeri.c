#include <stdio.h>

void main(){
	int v[10];
	int i=0;
	int n;
	int temp;

	for(int i=0;i<10;i++){
		printf("Inserisci un valore numerico: ");
		scanf("%d",&v[i]);
	}
	
	printf("\n");
	printf("Vettore inserito.\n");

	for(int i=0;i<10;i++){
                printf("%d ",v[i]);
        }

	for(int i=0;i<10;i++){
		if(v[i]>v[i+1]){
			temp=v[i];
			v[i]=v[i+1];
			v[i+1]=temp;
		}
	}
	
	printf("\n");
	printf("Vettore ordinato.\n");

	for(int i=0;i<10;i++){
		printf("%d ",v[i]);
	}
}
