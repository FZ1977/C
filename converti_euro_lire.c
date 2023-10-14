#define costante 1936.27

#define ETOL(euro) euro*costante
#define LTOE(lire) lire/costante

#include <stdio.h>

int main(){
    int lire = 50000, euro=50;
    printf("%d lire corrispondono a %f\n", lire, LTOE(lire));
    printf("%d euro corrispondono a %f euro\n", euro, ETOL(euro));
    return 0;
}
