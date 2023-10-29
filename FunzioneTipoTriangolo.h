#include <stdio.h>
#include <math.h>

int TipoTriangolo(float lato1, float lato2, float lato3){
    if(lato1==lato2 && lato1==lato3 && lato2==lato3)
    {
        printf("Triangolo equilatero.\n");
        return 0;
    }

    if(lato1==lato2 || lato1==lato3 || lato2==lato3)
    {
        printf("Triangolo isoscele.\n");
        return 0;
    }

    if(lato1!=lato2 && lato1!=lato3 && lato2!=lato3 && sqrt((lato1*lato1)+(lato2*lato2))!=lato3)
    {
        printf("Triangolo scaleno.\n");
        return 0;
    }

    if( sqrt((lato1*lato1)+(lato2*lato2))==lato3)
    {
        printf("Triangolo rettangolo.\n");
        return 0;
    }
}
