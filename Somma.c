#include <stdio.h>

int main(int argc, char argv[]){
    int a, b;

    printf("Inserisci un valore intero: ");
    scanf("%d", &a);
    printf("Inserisci un valore intero: ");
    scanf("%d", &b);

    printf("%d + %d = %d",a,b,a+b);
    return 0;
}
