#include <stdio.h>
#include <stdlib.h>

int *punta_int(int *v);

void main(){
	int *p, i;
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	
	if(v==NULL){
		printf("Non e' possibile allocare memoria\n");
	}
	
	p = punta_int(v);
	
	for(i=0; i<10; i++){
		printf("%d ",p[i]);
	}
}

int *punta_int(int *v){
	int **p, i;
	
	p = malloc(sizeof(int *)*10);
	
	if(p==NULL){
		printf("Non e' stato possibile allocare memoria.\n");
	}
	
	for(i=0; i<10; i++){
		p[i]=&v[i];
	}
	
	return *p;
}
