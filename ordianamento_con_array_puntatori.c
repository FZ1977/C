#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *giorni[7];
  char *appo;
  
  giorni[0] = "Lunedi";
  giorni[1] = "Martedi";
  giorni[2] = "Mercoledi";
  giorni[3] = "Giovedi";
  giorni[4] = "Venerdi";
  giorni[5] = "Sabato";
  giorni[6] = "Domenica";
  
  for(int i=0; i<6; i++){
    for(int j=i+1; j<7; j++){
      if(strlen(giorni[i]) > strlen(giorni[j])){
        appo = giorni[i];
        giorni[i] = giorni[j];
        giorni[j] = appo;
        appo = NULL;
      }
    }
  }
  
  for(int i=0; i<7; i++){
    printf("%s\n",giorni[i]);
  }
  
}