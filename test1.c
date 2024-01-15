#include <stdio.h>
#include <stdlib.h>

int main(){
    char **s;
    s = malloc(12 * sizeof(**s));
    s[0] = "Gennaio";
    s[1] = "Febbraio";
    s[2] = "Marzo";
    s[3] = "Aprile";
    s[4] = "Maggio";
    s[5] = "Giugno";
    s[6] = "Luglio";
    s[7] = "Agosto";
    s[8] = "Settembre";
    s[9] = "Ottobre";
    s[10] = "Novembre";
    s[11] = "Dicembre";

    for(int i=1; i<12; i++){
        printf("Mese di %s\n",s[i]);
    }

    return 0;
}
