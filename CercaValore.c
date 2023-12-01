#include <stdio.h>

int *OrdinaVettore(int *a){
    int i, temp, n;
    while(i<30)
    {
        if(a[i+1]<a[i])
        {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            n++;
        }
        i++;
    }
}

int main(int argc, char *argv[]){
    int a[]={1,5,67,12,8,6,34,25,27,57,58,87,86,76,75,61,43,45,41,47,49,99,3,4,10,20,40,77,88,2};


    return 0;
}
