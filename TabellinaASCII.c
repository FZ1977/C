#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    for(i=32;i<128;i++)
    {
        printf("%d - %c\n",i,i);
    }

    return 0;
}
