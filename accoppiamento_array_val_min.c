#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crea_vettore(int vet_1[], int vet_2[], int vet_3[]);

void main(){
  int vet_1[]={1,3,5,3,34,65,78,12,14,18};
  int vet_2[]={5,2,1,67,97,35,12,1,23,24};
  int vet_3[10];
  
  crea_vettore(vet_1, vet_2, vet_3);
  
  for(int i=0; i<10; i++){
    printf("vet_1: %d - vet_2: %d - vet_3: %d",vet_1[i], vet_2[i], vet_3[i]);
  }
  
  return;  
}

int crea_vettore(int vet_1[], int vet_2[], int vet_3[]){
  int *p;
  
  for(int i=0; i<10; i++){
    if(vet_1[i] < vet_2[i]){
      vet_3[i] = vet_1[i];
    } else {
      vet_3[i] = vet_2[i];
    }
  }
}