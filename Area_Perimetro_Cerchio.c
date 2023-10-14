#include <math.h>
#include <stdio.h>

#define AREA(r) M_PI*(r*r)
#define PERIMETRO(r) 2*M_PI*r

int main(){
    int r=4;
    printf("Valore di pi-greco %f\n",M_PI);
    printf("Area del cerchio di raggio %d = %f\n",r,AREA(r));
    printf("Perimetro del cerchio di raggio %d = %f\n",r,PERIMETRO(r));
    return 0;
}
