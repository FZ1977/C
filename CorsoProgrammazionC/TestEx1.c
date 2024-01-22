/*Test exams*/

#include <stdio.h>
#include <string.h>

void rimuovi_non_ordinati(char *a);

int main(){
    char a[] = "ddabeceffgfh";
    printf("%s\n",a);
    rimuovi_non_ordinati(a);
}

void rimuovi_non_ordinati(char *a){
    int n = strlen(a);
    int i=0;
    int j=0;
    char b[n];
    while(i < n){
        if(i == 0){
            b[j] = a[i];
            j++;
        }
        else
        {
            if(a[i] >= a[i-1]){
                b[j] = a[i];
                j++;
            }
        }
        i++;
    }

    for(i = 0; i < j; i++){
        printf("%c",b[i]);
    }
    printf("\n");
}
