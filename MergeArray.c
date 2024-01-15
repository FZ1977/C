/*Prende tre array ordinati in input e li ordina in un array*/

#include <stdio.h>
#include <string.h>

int main(){
    int a[] = {1,3,6,8,11,13,18,20};
    int b[] = {2,4,5,9,12,14,16,19,21};
    int c[] = {7,10,15,17,22,23,24,25};
    int d[25];
    int i = 0, i_a = 0, i_b = 0, i_c = 0;

    while( i_a < 8 && i_b < 9 && i_c < 8 ){
        if(a[i_a] < b[i_b] && a[i_a] < c[i_c]){
            d[i] = a[i_a];
            i_a++;
            i++;
        }

        if(b[i_b] < a[i_a] && b[i_b] < c[i_c]){
            d[i] = b[i_b];
            i_b++;
            i++;
        }

        if(c[i_c] < a[i_a] && c[i_c] < b[i_b]){
            d[i] = c[i_c];
            i_c++;
            i++;
        }
    }

    while(i_a < 8){
        d[i] = a[i_a];
        i_a++;
        i++;
    }

    while(i_b < 9){
        d[i] = b[i_b];
        i_b++;
        i++;
    }

    while(i_c < 8){
        d[i] = c[i_c];
        i_c++;
        i++;
    }

    for(i = 0; i < 25; i++){
        printf("%d ", d[i]);
    }
}
