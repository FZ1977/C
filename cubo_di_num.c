#define CUBE(num) num*num*num

#include <stdio.h>

int main(){
    printf("Il cubo di %d = %d\n",6,CUBE(6));
    printf("Il cubo di %d = %d\n",3+4,CUBE((3+4)));
    printf("Il cubo di %d = %d\n",7,CUBE(7));
    printf("Il cubo di %d = %d\n",9-3,CUBE((9-3)));
    return 0;
}
