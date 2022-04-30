/* Strutture in C */

#include <stdio.h>


/* definisco una struttura */
struct point{
	int x, y;
};

typedef struct point point;

point makepoint(int x, int y);

void main(){
	point *pp, pt, temp;
	pt.x=5;
	pt.y=9;
	printf("Richiamo struttura x=%d,y=%d\n", pt.x, pt.y);
	
	temp=makepoint(3,4);
	printf("Richiamo funzione x=%d,y=%d\n",temp.x, temp.y);
	
	pp=&pt;
	pp->x=6;
	pp->y=8;
	printf("Richiamo puntatore x=%d,y=%d\n", pp->x, pp->y);

	
}

struct point makepoint(int x, int y){	
	point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}
