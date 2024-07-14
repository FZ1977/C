#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char s[10];
    do {
        fgets(s, sizeof(s), stdin);
        n = atoi(s);

        if (n < 0){
            printf("    %d < 0: uscita dal loop...\n", n);
            break;
        }

        if(n > 10){
            printf("    %d > 10: non ammesso\n", n);
            continue;
        }

        printf("    valore immesso : n = %d\n", n);
    } while(1);
}