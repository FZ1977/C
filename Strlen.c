#include <stdio.h>
#include <stddef.h>

int main(int argc, char *argv[]){
    char *stringa="Ciao.";
    char *p;

    /*
    printf("Inserisci una stringa: ");
    scanf("%c",&stringa);
*/
    p=stringa;

    while(*p!='\0')
    {
        p++;
    }

    printf("La stringa e' lunga %d caratteri.",(p-stringa));

    return 0;
}
