/*Prende tre array ordinati in input e li ordina in un array*/

#include <stdio.h>
#include <string.h>

int fib(int);

int main(int argc, char *argv[]){
    int res;
    res = fib(atoi(argv[1]));

    printf("%d", res);
}

int fib(int n){
    int res = 1;
    if(n == 0 || n == 1)
    {
        return res;
    }
    else
    {
        return res = fib(n-1) + fib(n-2);
    }

    return res;
}
