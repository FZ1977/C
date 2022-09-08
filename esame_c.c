#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **funzione(char *a);

int main() {
  char *a="Programma C";
  char **p;
  p=funzione(a);
  return 0;
}

char **funzione(char *a){
  int n=0;
  //char *array_puntatori;
  char **array_puntatori;
  
  for(int i=0;a[i]!='\0';i++){
    printf("%c",a[i]);
    if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U'){
      n++;
    }
  }
  n++;
  array_puntatori=malloc(sizeof(char *)*n);
  
  int c=0;
  for(int i=0;a[i]!='\0';i++){
    if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U'){
      array_puntatori[c]=&a[i];
      c++;
    }
  }

  array_puntatori[c]=NULL;
  
  return array_puntatori;
}