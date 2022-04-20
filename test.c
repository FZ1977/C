#include <stdio.h>
#include <stdlib.h>

struct prova{
	int a;
	int b;
};

typedef struct prova prova;

prova zero(){
	prova p = {0,0};
	return p;
}

prova ins(prova p, int a, int b){
	p.a=a;
	p.b=b;
	
	return p;
}

prova mod(prova p){
	p.a = 3;
	p.b = 9;
	return p;
}

void main(){
	prova p;
	p=zero(p);
	printf("prima %d - %d\n",p.a, p.b);
	p=ins(p,1,3);
	printf("dopo %d - %d\n",p.a, p.b);
	p=mod(p);
	printf("mod %d - %d\n",p.a, p.b);
}
