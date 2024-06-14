#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_cat(char *a, int n, char *b);

int main(){
    char a[]="Ciao sono una stringa.";
    char b[]="Io sono la stringa da concatenare.";
    printf("%s\n",a);
    int n = strlen(a);
    a = str_cat(a, n, b);
    printf("%s\n",a);
}

char *str_cat(char *a, int n, char *b){
    int n_b = strlen(b);
    int i = 0;
    int j = 0;
    char *appo = malloc((n_b+n+1)*sizeof(char));
    while(a[j] != '\0'){
        appo[i] = a[j];
        i++;
        j++;
    }
    j=0;
    while(b[j] != '\0'){
        appo[i] = b[j];
        i++;
        j++;
    }
    appo[i] = '\0';
    return appo;
}
