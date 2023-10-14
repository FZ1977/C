#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10];
    int a,appo;
    while(1){
        printf("Inserisci un valore:");
        fgets(s,sizeof(s),stdin);
        a=atoi(s);
        if(a==appo){
            printf("Valore uguale consecutivo\n");
        }
        if(a==0){
            break;
        }
        appo=a;
    }
    return 0;
}
