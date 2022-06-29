#include <stdio.h>
#include <stdlib.h>

struct dict{
    int chiave;
    char *valore;
};

typedef struct dict dict;


void main(){
    dict d[3];
    int i;
    
    d[0].chiave=1;
    d[0].valore="Stgringa1";
    
    d[1].chiave=2;
    d[1].valore="Stringa2";
    
    d[2].chiave=3;
    d[2].valore="Stringa3";
    
    for(int j=0; j<3; j++){
      printf("%d\n", d[j].chiave);
      for(i=0; d[j].valore[i]!='\0'; i++){
        printf("%c",d[j].valore[i]);
      }
    }
}
