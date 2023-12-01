#include <stdio.h>

int *f(int [], int);

int main(){
    int n = 2;
    int a, b;

    a = ++n;
    b = n++;

    printf("Pre-fisso ++n: %d\n", a);
    printf("Post-fisso n++: %d\n", b);
}
