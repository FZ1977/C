//SELECTION SORT
#include <stdio.h>

void selection_sort(int *a, int len);

void main(){
    int a[]={4,5,1,8,2};
    int i=0;
    #define n 5

    printf("Array prima di essere ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }

    selection_sort(a,n);

    i=0;
    printf("\n");
    printf("Array dopo essere stato ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }
}

void selection_sort(int *a, int len){
    int appo;

    for(int j=0; j<len-1; j++){
        for(int i=j+1; i<len; i++){
            if(a[j]>a[i]){
                appo=a[j];
                a[j]=a[i];
                a[i]=appo;
            }
        }
    }
}
