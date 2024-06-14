#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  for(int i=0; i<10; i++){
    printf("%d\n",i);
    for(int j=0; j<10; j++){
        if(j%3){
            break;
        } else {
            printf("--->%d\n",j);
        }
    }
  }
}
