#include <stdio.h>

int main(int argc, char *argv[]){

    char *stringa;
    int base;

    if(argc != 3)
    {
        printf("Numero di parametri passati errato!\n");
        return 1;
    }

    stringa=argv[1];
    base=atoi(argv[2]);

    printf("Stringa: %s\n", stringa);
    printf("Base: %i\n", base);


    return 0;
}
