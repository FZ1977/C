#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    char *stringa;
    int base;
    int NumeroCaratteri = strlen(stringa);

    printf("Numero di argomenti passati %d\n",argc);
    if(argc != 3)
    {
        printf("Numero di parametri passati errato!\n");
        return 1;
    }

    stringa=argv[1];
    base=atoi(argv[2]);

    printf("Stringa: %s\n", stringa);
    printf("Base: %i\n", base);

    /*Procedo con la verifica della stringa inserita*/
    printf("Numero di caratteri della stringa %d\n",NumeroCaratteri);
    for(int i=0; i<NumeroCaratteri; i++)
    {
        printf("%d\n",atoi(stringa[i]));
        if(atoi(stringa[i])>=base)
        {
            printf("La stringa numerica non e' valida per la base passata!\n");
            return 1;
        }
    }

    printf("La stringa numerica e' valida per la base passata!\n");

    return 0;
}
