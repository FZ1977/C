#include <stdio.h>

struct mystruct{
    int n;
    float x;
    char *s;
};

typedef struct mystruct mystruct;

void set();

int main(){
    set();

    printf("%d - %f - %s\n", mystruct.n, mystruct.x, mystruct.s);
    return 0;
}

void set(){
    mystruct.n = 10;
    mystruct.x = 3.14;
    mystruct.s = "Ciao Mondo1";
}