/*matrice*/

#include <stdio.h>

void main(){
	int a[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int r, c;
	for(r=0;r<4;r++){
		for(c=0;c<5;c++){
			printf("%d\t",a[r][c]);
		}
		printf("\n");
	}
}
