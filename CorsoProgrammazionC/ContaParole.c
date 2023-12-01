#include <stdio.h>

main(){
    int c, p=0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == ',' || c == ';' || c == '.' || c == '\n'){
            p++;
        }
    }
    printf("Numero parole %d.\n",p);
}
