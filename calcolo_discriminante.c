#include <stdio.h>
#include <math.h>

float discriminante(float a, float b, float c){
    return (b*b)-4*(a*c);
}

int main(int argc, char *argv[]){
    float a,b,c;

    a=atof(argv[1]);
    b=atof(argv[2]);
    c=atof(argv[3]);

    printf("Valore del discriminante per i valore a=%f b=%f c=%f: %f",a,b,c,discriminante(a,b,c));
}
