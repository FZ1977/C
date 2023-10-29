/*
1. inserisco lato a e b di un rettangolo
2. stampo il valore del perimetro
3. stampo il valore dell'area
4. stampo il valore della diagonale
*/

#include <stdio.h>
#include <math.h>

float Area(float latoA, float latoB){
    return latoA*latoB;
}

float Perimetro(float latoA, float latoB){
    return (2*latoA) + (2*latoB);
}

float Diagonale(float latoA, float latoB){
    return sqrt((latoA*latoA)+(latoB*latoB));
}

int main(int argc, char *argv[]){
    float latoA=0, latoB=0;

    latoA=atof(argv[1]);
    latoB=atof(argv[2]);

    printf("Valore del perimetro del rettangolo %f\n",Perimetro(latoA,latoB));
    printf("Valore del area del rettangolo %f\n",Area(latoA,latoB));
    printf("Valore del diagonale del rettangolo %f\n",Diagonale(latoA,latoB));

    return 0;
}
