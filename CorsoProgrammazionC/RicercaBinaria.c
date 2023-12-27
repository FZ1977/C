/*Ricerca Binaria su un array di valori*/

#include <stdio.h>
#include <stdlib.h>

int RicercaBinaria(int, int *, int, int);

int main(){
    int x = 23;
    int sx = 0;
    int dx = 9;
    int a[] = {2,3,5,6,8,9,10,12,23,41};

    if(RicercaBinaria(x, a, sx, dx)){
        printf("Il valore %d esiste nella lista.\n",x);
    }
    else
    {
        printf("Il valore %d non esiste nella lista.\n",x);
    }
}

int RicercaBinaria(int x, int *a, int sx, int dx){
    int cx = 0;
    int ans;
    cx = (dx - sx)/2 + sx;
    printf("sx: %d cx: %d dx: %d\n",sx,cx,dx);

    if(a[cx] == x){
        return a[cx];
    }

    if(a[cx] < x && sx <= dx){
        sx = cx;
        ans = RicercaBinaria(x, a, sx, dx);
        return ans;
    }

    if(a[cx] > x && sx <= dx){
        dx = cx;
        ans = RicercaBinaria(x, a, sx, dx);
        return ans;
    }

    return 0;
}
