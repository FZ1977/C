#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[80], op[5];
    int a,b;
    printf("inserisci il primo operando:");
    fgets(s,sizeof(s),stdin);
    a=atoi(s);
    printf("inserisci il secondo operando:");
    fgets(s,sizeof(s),stdin);
    b=atoi(s);
    printf("inserisci l'operatore:");
    fgets(op,sizeof(op),stdin);

    if (op[0]=='/' || op[0]=='%' && b==0){
        printf("Non e' possibile dividere per 0");
        return 1;
    }

    if(op[0]=='+')
        printf("%d + %d = %d",a,b,a+b);
    if(op[0]=='-')
        printf("%d + %d = %d",a,b,a-b);
    if(op[0]=='*')
        printf("%d + %d = %d",a,b,a*b);
    if(op[0]=='/')
        printf("%d + %d = %d",a,b,a/b);
    if(op[0]=='%')
        printf("%d + %d = %d",a,b,a%b);
    if(op[0]!='+' && op[0]!='-' && op[0]!='*' && op[0]!='/' && op[0]!='%')
        printf("parametro errato.");

    return 0;
}
