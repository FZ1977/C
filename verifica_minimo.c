#include <stdio.h>
#include <math.h>

int fattoriale(int valore){
    int res=1;
    for(int i=1;i<valore+1;i++)
    {
        res=res*i;
        printf("res %d\n",res);
        if(!verifica(res, valore))
        {
            return i;
        }
    }
}

int verifica(int res,int valore){
    if(res>valore)
    {
        return 0;
    }
}

int main(int argc, char *argv[]){
    int valore;

    if(argc != 2)
    {
        printf("Numero di parametri errato.\n");
        return 1;
    }

    valore=atoi(argv[1]);

    printf("Il valore minimo e': %d\n",fattoriale(valore));
}
