/*Esame4*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rimuovi_stringa(char *a, char *b);

int main(){
    char a[] = "programmazione dei calcolatori";
    char b[] = "azione";
    printf("%d\n",rimuovi_stringa(a,b));
    printf("%s\n",a);

}

int rimuovi_stringa(char *a, char *b){
    int i = 0, j = 0, z = 0, c = 0;
    int n_a = strlen(a);
    int n_b = strlen(b);
    char *appo = malloc((n_a-n_b)*sizeof(char));

    while( a[i] != '\0' && b[j] != '\0' ){
        if( a[i] == b[j] ){
            c++;
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
            c = 0;
        }

        if(c == n_b){
            i = i - n_b;
            j = 0;
            while(z < n_a){
                if(z < i ){
                    appo[j] = a[z];
                    j++;
                } else if( z >= i+n_b ){
                    appo[j] = a[z];
                    j++;
                }
                z++;
            }
            appo[j++] = '\0';

            i = 0;
            while(appo[i] != '\0'){
                a[i] = appo[i];
                i++;
            }
            a[i] = '\0';

            return 1;
        }
    }

    return 0;
}
