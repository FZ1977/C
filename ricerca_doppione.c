#include <stdio.h>

int main(int argc, char *argv[]){
    int vettore[]={1,2,5,7,6,3,10,14,32,2,4,87};
    int sizeVettore=sizeof(vettore)/sizeof(int);
    int valoreRicerca, conta=0;
    int i,j;

    for(i=0;i<sizeVettore;i++)
    {
        valoreRicerca=vettore[i];
        for(j=i+1;j<sizeVettore;j++)
        {
            if(valoreRicerca==vettore[j])
            {
                conta++;
            }
            if(conta>0)
            {
                printf("E' stata trovata una coppia di valori - il valore trovato e': %d\n",valoreRicerca);
                return 0;
            }
        }
    }
}
