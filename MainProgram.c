#include <stdio.h>
#include <stdlib.h>
#include "FunzioneCast.h"

int main(int argc, char argv[]){
    int *p;
    p=FunzioneCast((int)2);

    printf("Valore di memoria del puntatore %p.\n",FunzioneCast((int)2));
    printf("Valore %d",*p);
    return 0;
}
