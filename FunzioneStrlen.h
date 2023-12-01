#include <stdio.h>
#include <stddef.h>

int FStrlen(char *s){
    char *p;
    p=s;

    while(*p!='\0')
    {
        p++;
    }

    return p-s;
}
