/*
Prendo in input un vettore di stringhe e verifico se ci sono stringhe palindrome
l'ultima stringa è ""
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *palindroma(char *);

void main(){
    int i = 0;
    char *stringa[] = {"area", "etna gigante", ""};
    
    while(stringa[i] != '\0')
    {
        palindroma(stringa[i]);
        i++;
    }
}

char *palindroma(char *s){
    int i = 0;
    char vstr[20];
    
    while(*s != '\0'){
        if(*s != ' '){
            vstr[i] = *s;
            s = s+1;
            i++;
        } else {
            s = s+1;
        }
    }
    vstr[i] = '\0';
    
    i = 0;
    while(vstr[i] != '\0'){
        printf("%c",vstr[i]);
        i++;
    }
}
