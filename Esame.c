#include <stdio.h>
#include <stdlib.h>

char **funzione(char *);

int main() {
  char *a = "Programma C";
  char **p = funzione(a);
  for(int i=0; *p[i]!=NULL; i++){
   printf("%c\n",*p[i]);
 }
 return 0;
}

char **funzione(char *a){
  int i, j=0, conta=0;
  
  for(i=0; a[i]!='\0'; i++){
    if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
      conta++;
    }
  }
  
  char **p = malloc(sizeof(char *)*(conta+1));
  
  for(i=0; a[i]!='\0'; i++){
    if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
      p[j]=&a[i];
      j++;
    }
  }
  p[j]=NULL;
  
  return p;
}