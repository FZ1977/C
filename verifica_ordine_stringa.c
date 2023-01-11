#include <stdio.h>
#include <stdlib.h>

/*
1. Creo una funzione che prende una stringa in input
2. la funzione verifica che la stringa sia ordinata lessograficamente
3. Se è ordinata ritorna 1 altrimenti 0
*/

int verifica_stringa(char *stringa);

int main() {
  char *stringa="abdc";
  int res;
  res=verifica_stringa(stringa);
  printf("%d\n",res);
  return 0;
}

int verifica_stringa(char *stringa){
  int test=0;
  for(int i=0; i<strlen(stringa)-1; i++){
    if(stringa[i]>stringa[i+1]){
      test++;
    }
  }
  if(test!=0){
    return 0;
  } else {
    return 1;
  }
}