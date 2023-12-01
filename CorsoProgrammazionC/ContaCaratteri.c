#include <stdio.h>

main(){
    int c, n=0, i= 0;

    while((c=getchar()) != EOF){
        n++;
        ++i;
        printf("Hai scritto n=%d, i=%d caratteri.\n",n, i);
    }
}
