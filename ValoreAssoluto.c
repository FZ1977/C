#include <stdio.h>

int main(int argc, char **argv){
    float a;

    printf("Inserisci un valore: ");
    scanf("%f",&a);

    if(a<0)
    {
        printf("Valore assoluto %f\n",(-1)*a);
    }

    if(a>0)
    {
        printf("Valore assoluto %f\n",a);
    }

    if(a==0)
    {
        printf("0\n");
    }

    return 0;
}
