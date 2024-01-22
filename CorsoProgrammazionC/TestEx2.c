/*Exam 2*/
#include <stdio.h>
#include <stdlib.h>

void sort_by_vocals( char *a );

int main(){
    char a[] = ".pr0grAmMaz1onE-C*";
    sort_by_vocals(a);
}

void sort_by_vocals( char *a ){
    char *p = a;
    int n_v = 0;
    int n_c = 0;
    int i = 0, j, x;
    char *b, *c;
    char appo;

    while( p[i] != '\0' ){
        if( p[i] == 'a' || p[i] == 'A' || p[i] == 'e' || p[i] == 'E' || p[i] == 'i' || p[i] == 'I' || p[i] == 'o' || p[i] == 'O' || p[i] == 'u' || p[i] == 'U'){
            n_v++;
        }
        else
        {
            n_c++;
        }
        i++;
    }

    b = malloc(n_v);
    c = malloc(n_c);

    if( b == NULL ){
        exit(1);
    }

    if( c == NULL ){
        exit(1);
    }

    p = a;
    i = 0;
    j = 0;
    x = 0;
    while( p[i] != '\0' ){
        if( p[i] == 'a' || p[i] == 'A' || p[i] == 'e' || p[i] == 'E' || p[i] == 'i' || p[i] == 'I' || p[i] == 'o' || p[i] == 'O' || p[i] == 'u' || p[i] == 'U'){
            b[j] = p[i];
            j++;
        }
        else
        {
            c[x] = p[i];
            x++;
        }
        i++;
    }

    for(i = 0; i < n_v; i++){
        for(j = 0; j < n_v-1; j++){
            if( b[j] > b[j+1] ){
                appo = b[j];
                b[j] = b[j+1];
                b[j+1] = appo;
            }
        }
    }

    for(i = 0; i < n_c; i++){
        for(j = 0; j < n_c-1; j++){
            if( c[j+1] < c[j] ){
                appo = c[j];
                c[j] = c[j+1];
                c[j+1] = appo;
            }
        }
    }

    for(i = 0; i<n_v; i++){
        printf("%c",b[i]);
    }

    for(i = 0; i<n_c; i++){
        printf("%c",c[i]);
    }
}
