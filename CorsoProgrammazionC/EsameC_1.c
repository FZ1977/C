#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct array_int{
    int *a;
    int n;
};

    typedef struct array_int array_int;

array_int posizione_vocali(char *s);

int main(){
    char s[50];
    array_int x;

    scanf("%s",&s);
    x=posizione_vocali(s);

    for(int i=0;i<x.n;i++){
        printf("%d ",x.a[i]);
    }

    printf("x.n=%d",strlen(x.n));

    return 0;
}

array_int posizione_vocali(char *s){
    array_int x;
    x.n = 0;
    int j=0; //indice per l'array di int
    //Conto il numero di vocali
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            x.n++;
        } else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            x.n++;
        }
    }

    x.a = malloc(x.n*sizeof(int));

    for(int i=0; i<strlen(s); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            x.a[j] = i;
            j++;
        } else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            x.a[j] = i;
            j++;
        }
    }

    return x;
}
