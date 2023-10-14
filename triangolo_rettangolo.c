#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10];
    int a,b;
    printf("Inserisci la base:");
    fgets(s,sizeof(s),stdin);
    a=atoi(s);
    printf("Inserisci l'altezza:");
    fgets(s,sizeof(s),stdin);
    b=atoi(s);

    for(int i=1; i<=b; i++){
        int j=0;
        while(j<i && j<=a){
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}
