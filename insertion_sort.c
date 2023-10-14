//INSERTION SORT
#include <stdio.h>

void insertion_sort(int *a,int len);

void main(){
    int a[]={12,5,3,4};
    int i=0;
    #define n 4

    printf("Array prima di essere ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }

    insertion_sort(a,n);

    i=0;
    printf("\n");
    printf("Array dopo essere stato ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }
}

void insertion_sort(int *a,int len){
    int appo;
    int x;

    for(int i=1; i<len; i++){
        if(i>1){
            if(a[i]<a[i-1]){
                appo=a[i];
                a[i]=a[i-1];
                a[i-1]=appo;
                x=i-1;
                while(x>=1){
                    if(a[x]<a[x-1]){
                        appo=a[x-1];
                        a[x-1]=a[x];
                        a[x]=appo;
                    }
                    x=x-1;
                }
            }
        }
        if(i==1){
            if(a[i]<a[i-1]){
                appo=a[i];
                a[i]=a[i-1];
                a[i-1]=appo;
            }
        }
    }
}
