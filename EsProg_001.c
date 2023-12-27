/*Esercizio programmazione 1*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i = 0, j;
    char *s;
    char c;
    int conta = argc - 1;
    int v[] = {0,0,0,0,0};

    for(i = 1; i < argc; i++){
        s = argv[i];
        j = 0;
        while(s[j] != '\0' && conta < 80){
            if(s[j] == 'a'){
                v[0] += 1;
            }
            if(s[j] == 'e'){
                v[1] += 1;
            }
            if(s[j] == 'i'){
                v[2] += 1;
            }
            if(s[j] == 'o'){
                v[3] += 1;
            }
            if(s[j] == 'u'){
                v[4] += 1;
            }
            conta++;
            j++;
        }
    }
    printf("a = %d\n", v[0]);
    printf("e = %d\n", v[1]);
    printf("i = %d\n", v[2]);
    printf("o = %d\n", v[3]);
    printf("u = %d\n", v[4]);
    printf("\n");
    /*Calcolo quale vocale viene ripetuta più volte*/
    int m = 0;
    for(i = 0; i < 5; i++){
        printf("%d = %d\n",v[m], m);
        if(v[i] > v[m]){
            m = i;
        }
    }

    if(m == 0){
        c = 'a';
    }
    if(m == 1){
        c = 'e';
    }
    if(m == 2){
        c = 'i';
    }
    if(m == 3){
        c = 'o';
    }
    if(m == 4){
        c = 'u';
    }

    for(i = 1; i < argc; i++){
        s = argv[i];
        j = 0;
        while(s[j] != '\0' && conta < 80){
            if(s[j] == c){
                printf("%c",s[j]-32);
            }
            else
            {
                printf("%c",s[j]);
            }
            j++;
        }
        printf(" ");
    }
}
