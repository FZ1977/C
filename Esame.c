#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void centering(int *a, int r, int c);

void main(){
    int r=6, c=5;
    int a[] = { 1,1,0,0,0,
            1,0,0,0,0,
            1,1,1,0,0,
            1,1,0,0,0,
            1,1,1,1,0,
            1,1,1,1,1
            };
    centering(a,r,c);

    return 0;
}

void centering(int *a, int r, int c){
    int appo;
    for(int i=0; i<r*c; i++){
        if(i==0 || i==5 || i==10 || i==15 || i==20 || i==25){
            appo = *a;
            *a=*(a+2);
            *(a+2)=appo;
            printf("a: %d - a+2: %d\n", *a, *(a+2));
        }
        a++;
    }

    a=a-30;

    for(int righe=0; righe<r; righe++){
        for(int colonne=0; colonne<c; colonne++){
            printf("%d ",*a);
            a++;
        }
        printf("\n");
    }

}
