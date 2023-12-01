#include <stdio.h>

main(){
    int c, l=0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            l++;
            printf("Riga numero %d\n", l);
        }
    }
}
