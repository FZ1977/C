#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b, ris=0, res=0;
    char s[80], op[2];

    printf("inserisci il primo operando:");
    fgets(s,sizeof(s),stdin);
    a=atoi(s);

    printf("inserisci il secondo operando:");
    fgets(s,sizeof(s),stdin);
    b=atoi(s);

    printf("inserisci operatore:");
    fgets(op,sizeof(op),stdin);


    if(op[0]=='/' && b!=0){
        res=a-b;
        ris++;
        while(res>1){
            res=res-b;
            ris++;
        }

        printf("%d / %d = %d con resto %d",a,b,ris,res);
    }

    if(op[0]=='*'){
        for(int i=0;i<b;i++){
            ris=ris+a;
        }

        printf("%d * %d = %d",a,b,ris);
    }

    return 0;
}
