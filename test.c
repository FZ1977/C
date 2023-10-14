#include <stdio.h>
#include <stdlib.h>

int *f(){
    int a=1;
    int *p;
    p=&a;
    //printf("Valore di p dentro f %d - %x\n",*p,p);
    return p;
}

void main(){
    int *a;
    int b[]={1,2,3,4};
    int n=4;
    a=f();
    //printf("Valore di p dentro main %d - %x\n",*a,a);

    int i=0;
    printf("%d %d\n", b[0], b[1]);
    while(i<n-1){
        printf("%d %d\n", b[i], b[i+1]);
        i++;
    }
}
