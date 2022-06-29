/*swap variabile*/

#include <stdio.h>
#include <stdlib.h>

void scambia(int *p, int *q);

void main(){
	int a, b;
	int *p, *q;
	a=3;
	b=8;
	
	p=&a;
	q=&b;
	
	printf("a=%d - b=%d\n",*p, *q);
	scambia(p, q);
}

void scambia(int *p, int *q){
	int *temp;
	temp = p;
	p = q;
	q = temp;
	printf("a=%d - b=%d\n",*p, *q);
}
