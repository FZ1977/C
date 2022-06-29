/*Ordinamento con tramite array di puntatori*/

#include <stdio.h>
#include <stdlib.h>

void main(){
  int **p, a, b, c;
  a=7;
  b=5;
  c=6;
  
  p = malloc(sizeof(int *)*5);

  p[0] = &a;
  p[1] = &b;
  p[2] = &c;
  
  printf("Prima dell'ordinamento\n");
  for(int i=0; i<3; i++){
    printf("%d ", *(*(p+i)));
  }
  printf("\n");
  if(*(p[0])>*(p[1])){
    p[0]=&b;
    p[1]=&a;
  }
  
  if(*(p[1])>*(p[2])){
    p[1]=&c;
    p[2]=&a;
  }
  printf("\n");
  printf("Dopo l'ordinamento\n");
  for(int i=0; i<3; i++){
    printf("%d ", *(*(p+i)));
  }
}
