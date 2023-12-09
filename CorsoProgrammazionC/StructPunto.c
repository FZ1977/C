/*
* Definisco una nuova struttura dati utilizzando le struct.
*/

#include <stdio.h>

struct punto{
    float x;
    float y;
};

typedef struct punto punto;

float RadiceQuadrata(float);

int main(){
    punto p1, p2;
    float dx, dy, segmento;

    printf("Inserisci x1: ");
    scanf("%f",&p1.x);
    printf("Inserisci y1: ");
    scanf("%f",&p1.y);

    printf("Inserisci x2: ");
    scanf("%f",&p2.x);
    printf("Inserisci y2: ");
    scanf("%f",&p2.y);

    if(p1.x > p2.x){
        dx = p1.x - p2.x;
    }
    if(p1.x < p2.x){
        dx = p2.x - p1.x;
    }
    if(p1.x == p2.x){
        dx = 0.0;
    }

    if(p1.y > p2.y){
        dy = p1.y - p2.y;
    }
    if(p1.y < p2.y){
        dy = p2.y - p1.y;
    }
    if(p1.y == p2.y){
        dy = 0.0;
    }

    segmento = RadiceQuadrata((dx*dx) + (dy*dy));
    printf("Valore di x %.2f e y %.2f\n",p1.x, p1.y);
    printf("Valore di x %.2f e y %.2f\n",p2.x, p2.y);
    printf("Valore del segmento %f\n",segmento);

    return 0;
}

float RadiceQuadrata(float x){
    float g = x;
    float e = 0.00001;

    while(g*g - x > e){
        g = (g + x/g)/2;
        printf("%f\n",g);
    }

    return g;
}
