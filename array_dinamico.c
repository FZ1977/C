#include <stdio.h>
#include <stdlib.h>

/*
Descrivo l'algoritmo per realizzare un array dinamico

1. creo un array vuoto di dimensione n
2. inserisco il valore
3. verifico se c'è spazio per l'inserimento dei termini
4. se ho spazio allora aggiungo il nuovo valore
5. se non ho spazio allora creo un nuovo array di dimensioni doppie rispetto al primo
6. copio tutti i valori del vecchio nel nuovo
7. elimino lo spazio di memoria allocato per il vecchio array
*/

int main() {
  int *mio_array;
  int *p;
  int c=0;
  int n=2;
  int valore=0;
  
  mio_array = malloc(sizeof(int)*n);
  
  if(mio_array == NULL){
    printf("Non ho spazio per allocare il nuovo array\n");
  }
  
  for(int x=0; x<=100; x++){
  
  if(c<n){
    mio_array[c]=valore;
    c++;
    valore++;
  } else {
    int nv = n*2;
    p=malloc(sizeof(int)*nv);
    
    if(p == NULL){
      printf("Non ho spazio per allocare il nuovo array\n");
    }
    
    for(int i=0; i<n; i++){
      p[i]=mio_array[i];
    }
    n=nv;
    p[c]=valore;
    valore++;
    c++;
    free(mio_array);
    mio_array=p;
  
  }
   
  }
  
  return 0;
}