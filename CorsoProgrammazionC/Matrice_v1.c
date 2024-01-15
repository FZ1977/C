/*Creazione di una matrice*/

#include <stdio.h>
#include <stdlib.h>

int get_val(int *, int, int, int);
void set_val(int *, int, int, int, int);

int main(){
    int *a;
    int n_r, n_c;
    int r = 0, c = 0;
    int val, p;

    a = malloc(sizeof(int)*(n_r*n_c));

    n_c = 7;
    n_r = 5;

    for(r = 0; r < n_r; r++){
        for(c = 0; c < n_c; c++){
            val = r*c+1;
            set_val(a,r,c,n_c,val);
        }
    }

    for(r = 0; r < n_r; r++){
        for(c = 0; c < n_c; c++){
            printf("%3d ",get_val(a,r,c,n_c));
        }
        printf("\n");
    }

    for(p = 0; p < n_r*n_c-1; p++){
        r = p/n_c;
        c = p%n_c;
        val = a[p];
        printf("a[%d][%d] = %d\n", r, c, val);
    }

}

void set_val(int *a,int r, int c, int n_c, int v){
    a[c+(n_c*r)] = v;
}

int get_val(int *a, int r, int c, int n_c){
    return a[c+(n_c*r)];
}
