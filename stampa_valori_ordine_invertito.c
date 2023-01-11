#include <stdio.h>

int main()
{
    int i=0;
    int a[10];
    
    while(i<10){
        printf("Inserisci un numero intero: ");
        scanf("%d",&a[i]);
        i++;
    }
    
    for(i=9; i>=0; i--){
        printf("%d\n",a[i]);
    }
    
    return 0;
}