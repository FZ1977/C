#define ABSOLUTE(num) abs(num)

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Il valore assoluto di %d e' %d\n",-1,ABSOLUTE(-1));
    printf("Il valore assoluto di %d e' %d\n",(3-4),ABSOLUTE(3-4));
    printf("Il valore assoluto di %d e' %d\n",7,ABSOLUTE(7));
    printf("Il valore assoluto di %d e' %d\n",(-8-3),ABSOLUTE((-8-3)));
    return 0;
}
