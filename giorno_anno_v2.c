#include <stdio.h>

int days(int giorno, int mese){
    int giorni_mese[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int somma=0;

    for(int i=1;i<mese;i++)
    {
        somma=somma+giorni_mese[i];
    }

    somma=somma+giorno;

    return somma;
}

int verify(int giorno, int mese){
    if(giorno==0)
    {
        printf("Hai inserito un giorno errato.\n");
        return 1;
    }

    if(mese>12)
    {
        printf("Hai inserito un mese sbagliato.\n");
        return 1;
    }

    if(mese==11 || mese==4 || mese==6 || mese==9)
    {
        if(giorno>30)
        {
            printf("Hai inserito un valore errato per questo mese.\n");
            return 1;
        }
    }

    if(mese==1 || mese==3 || mese==5 || mese==7 || mese==8 || mese==10 || mese==12)
    {
        if(giorno>31)
        {
            printf("Hai inserito un valore errato per questo mese.\n");
            return 1;
        }
    }

    if(mese==2)
    {
        if(giorno>28)
        {
            printf("Hai inserito un valore errato per questo mese.\n");
            return 1;
        }
    }

    return 0;
}

int main(int argc, char *argv[]){
    int giorno;
    int mese;
    int somma=0;

    giorno=atoi(argv[1]);
    mese=atoi(argv[2]);

    if(argc!=3)
    {
        printf("Numero di parametri errato\n");
        return 1;
    }

     if(verify(giorno, mese))
     {
         return 1;
     }
     /*
        30 giorni=novembre, aprile, giugno e settembre
        28 febbraio
        31 gennaio, marzo, maggio, luglio, agosto, ottobre, dicembre
    */
    printf("Numero di giorni: %d",days(giorno,mese));
    return 0;
}
