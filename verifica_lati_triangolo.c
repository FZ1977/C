#include <stdio.h>
#include <math.h>

float Fmassimo(float latoA, float latoB, float latoC){
    if(latoA>latoB && latoA>latoC)
    {
        return latoA;
    }

    if(latoB>latoA && latoB>latoC)
    {
        return latoB;
    }

    if(latoC>latoA && latoC>latoB)
    {
        return latoC;
    }

    return latoA;
}

float Fminimo(float latoA, float latoB, float latoC){
    if(latoA<latoB && latoA<latoC)
    {
        return latoA;
    }

    if(latoB<latoA && latoB<latoC)
    {
        return latoB;
    }

    if(latoC<latoA && latoC<latoB)
    {
        return latoC;
    }

    return latoA;
}

float Fmedio(float latoA, float latoB, float latoC){
    if(latoB<latoA && latoA<latoC || latoC<latoA && latoA<latoB)
    {
        return latoA;
    }

    if(latoA<latoB && latoB<latoC || latoC<latoB && latoB<latoA)
    {
        return latoB;
    }

    if(latoA<latoC && latoC<latoB || latoB<latoC && latoC<latoA)
    {
        return latoC;
    }

    return latoA;
}

int Fverifica(float latoA, float latoB, float latoC){
    if(latoA+latoB>latoC)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char *argv[]){

    float latoA=0, latoB=0, latoC=0;
    float Massimo=0, Minimo=0, Medio=0;

    if(argc != 4)
    {
        printf("Non hai inserito i parametri corretti.\n");
        return 1;
    }

    latoA=atof(argv[1]);
    latoB=atof(argv[2]);
    latoC=atof(argv[3]);

    Massimo=Fmassimo(latoA,latoB,latoC);
    Minimo=Fminimo(latoA,latoB,latoC);
    Medio=Fmedio(latoA,latoB,latoC);

    printf("Valore Massimo: %f\n", Massimo);
    printf("Valore Medio: %f\n", Medio);
    printf("Valore Minimo: %f\n", Minimo);

    if(Fverifica(Minimo, Medio, Massimo))
    {
        printf("I valori dei lati non sono validi.\n");
    }
    else
    {
        printf("I valori dei lati sono vaidi.\n");
    }
}
