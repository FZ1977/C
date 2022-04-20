/* binsearch: trova x in vettore ordinato di numeri. */

#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n){
	int low, high, mid;
	low = 0;
	high = n - 1;

	while(low<=high){
		mid = (low+high)/2;
		if(x<v[mid])
			high = mid - 1;
		else if(x>v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

void main(){
	int v[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int x;
	int res;
	int n=0;

	printf("Inserisci un valore numerico: ");
	scanf("%d", &x);

	n = sizeof(v)/sizeof(int);	

	printf("Il vettore e' lungo %d.\n", n);
	
	res = binsearch(x, v, n);

	if(res != -1)
		printf("Valore presente.\n");
	else
		printf("Valore non presente.\n");
}
