#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *s, *t, *p_s, *p_t;
    int n;

    s="Copia la stringa.";
    p_s=s;

    printf("s = %s\n",s);
    while(*p_s!='\0')
    {
        p_s++;
    }

    n=p_s-s;
    t=malloc((n+1)*sizeof(*s));

    p_s=s;
    p_t=t;

    while(*s!='\0')
    {
        *p_t=*s;
        s++;
        p_t++;
    }

    p_t++;
    *p_t='\0';
    printf("t = %s\n",t);

    return 0;
}
