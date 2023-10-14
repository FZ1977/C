#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10];
    int a,b,c;
    printf("Inserisci il primo valore:");
    fgets(s,sizeof(s),stdin);
    a=atoi(s);
    printf("Inserisci il secondo valore:");
    fgets(s,sizeof(s),stdin);
    b=atoi(s);
    printf("Inserisci il terzo valore:");
    fgets(s,sizeof(s),stdin);
    c=atoi(s);

    if(a>b && a>c){
        printf("valore massimo=%d",a);
    }
    if (b>c && b>a){
        printf("valore massimo=%d",b);
    }
    if (c>a && c>b){
        printf("valore massimo=%d",c);
    }
    return 0;
}
