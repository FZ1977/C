#include <stdio.h>
#include <stdlib.h>

struct dict{
    int chiave;
    char *valore;
};

typedef struct dict dict;


void main(){
    dict *d;
    int i;
    
    d=(dict *)malloc(3*sizeof(dict));
    
	(d+0)->chiave=1;
	(d+0)->valore="Stringa1";
	
	(d+1)->chiave=2;
	(d+1)->valore="Stringa2";
	
	(d+2)->chiave=3;
	(d+2)->valore="Stringa3";
	
	for(i=0;i<3;i++){
		printf("chiave: %d - valore: %s\n",(d+i)->chiave, (d+i)->valore);
	}
}
