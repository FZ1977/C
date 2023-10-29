#include <stdio.h>
#include <math.h>

float AreaQuadrato(float l){
    return l*l;
}

float AreaCerchio(float r){
    return 3.14*(r*r);
}

float AreaTriangolo(float l){
    return (l*l)*(sqrt(3)/4);
}
