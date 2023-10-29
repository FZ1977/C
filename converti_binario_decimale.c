#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
    char stringa[]={'1','0','0','1','1','1','0','0'};
    int indice=strlen(stringa);
    double risultato=0;

    int esponente=indice-1;

    for(int i=0;i<indice;i++)
    {
        if(stringa[i]=='1')
        {
            risultato=risultato+pow((double)2,(double)esponente);
        }
        esponente--;
    }

    printf("%s = %d\n",stringa, (int)risultato);
    return 0;
}
