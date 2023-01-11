#include <stdio.h>
#include <string.h>

int calcola_min(int a[]);
int calcola_max(int a[]);
int calcola_media(int a[]);

int main()
{
    int i=0;
    int a[51];
    int min, max, media;
    
    while(i<51){
        printf("Inserisci un numero intero; 0 per uscire:");
        scanf("%d", &a[i]);
        
        if(a[i] == 0){
            a[i+1]='\0';
            break;
        }
        i++;
    }
    a[i]='\0';
    min=calcola_min(a);
    max=calcola_max(a);
    media=calcola_media(a);
    
    printf("min: %d - max: %d - media: %d", min, max, media);
    
    return 0;
}

int calcola_min(int a[]){
    int min=0;
    int i=0;
    while(a[i] != '\0'){
        if(a[i]<min){
            min = a[i];
        }
        i++;
    }
    
    return  min;
}
int calcola_max(int a[]){
    int max=0;
    int i=0;
    while(a[i] != '\0'){
        if(a[i]>max){
            max = a[i];
        }
        i++;
    }
    
    return  max;
}
int calcola_media(int a[]){
    int somma=0;
    int media=0;
    int i=0;
    int conta=1;
    
    while(a[i] != '\0'){
        somma = somma + a[i];
        i++;
        conta++;
    }
    
    media=somma/conta;
    
    return  media;
}