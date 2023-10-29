#include <stdio.h>

int main(int argc, char *argv[]){
    float a;

    while(1)
    {
        printf("Inserisci un numero: ");
        scanf("%f",&a);

        if(a>0)
        {
            printf("Valore inserito positivo.\n");
        }

        if(a<0)
        {
            printf("Valore inserito negativo.\n");
        }

        if(a==0)
        {
            return 0;
        }

    }
}
