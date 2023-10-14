//BUBBLE SORT - versione ottimizzata per non fargli fare controlli inutili.
#include <stdio.h>

void bubble_sort(int *a, int len);

void main(){
    int a[]={4,5,1,8,2};
    int i=0;
    #define n 5

    printf("Array prima di essere ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }

    bubble_sort(a,n);

    i=0;
    printf("\n");
    printf("Array dopo essere stato ordinato.\n");
    while(i<n){
        printf("%d ",a[i]);
        i++;
    }
}

void bubble_sort(int *a, int len){
    int test = 0;
    int appo;

    while(test != 1){
        test=1;
        int i = 0;
        int j = 1;
        while (i<len-1 && j<len){
            if(a[i]>a[j]){
                appo = a[i];
                a[i] = a[j];
                a[j] = appo;
                test=0;
            }
            j++;
            i++;
        }
    }
}
