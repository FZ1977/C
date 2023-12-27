/* Scrivere un programma che prende in input un numero imprecisato di punti
*  e poi calcola il perimetro della figura.
*  Note: I punti devono essere passati secondo l'ordine corretto.
*/

#include <stdio.h>

float RadiceQuadrata(float);
float AbsVal(float);

int main(int argc, char *argv[]){
    float x1, y1, x2, y2, perimetro = 0;

    /*Qui leggo i valori inseriti*/
    for(int i=1; i<argc-1; i++){
        sscanf(argv[i],"%f,%f", &x1, &y1);
        sscanf(argv[i+1],"%f,%f", &x2, &y2);
        printf("(x2=%.3f x1=%.3f) (y2=%.3f y1=%.3f) l=%.3f\n", x2, x1, y2, y1, RadiceQuadrata((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
        perimetro += RadiceQuadrata((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    }
    /*Qui calcolo il quadrato di un valore*/
    sscanf(argv[1],"%f,%f", &x1, &y1);
    sscanf(argv[argc],"%f,%f", &x2, &y2);
    printf("(x2=%.3f x1=%.3f) (y2=%.3f y1=%.3f) l=%.3f\n", x2, x1, y2, y1, RadiceQuadrata((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
    perimetro += RadiceQuadrata((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    /*Qui calcolo la radice quadrata del valore calcolato = distanza tra punti*/
    printf("Perimetro = %.3f\n", perimetro);
}

float RadiceQuadrata(float x){
    /*Calcolo la radice quadrata di un valore*/
    float g = x; // Valore approssimato della radice quadrata
    float e = 0.0001; // Errore di approssimazione

    while(AbsVal(g*g - x) > e){
        g = (g + x/g)/2;
    }

    return g;
}

float AbsVal(float x){
    if(x < 0){
        return (-1)*x;
    }
    else
    {
        return x;
    }
}
