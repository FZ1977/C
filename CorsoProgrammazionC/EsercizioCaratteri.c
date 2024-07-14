#include <stdio.h>
#include <string.h>

char converti_maiuscole_minuscole(char a);

int main(){
    if('a'<'A'){
        printf("sono in ordine lessicografico\n");
    } else {
        printf("non sono in ordine lessicografico\n");
    }

    printf("a=%d A=%d\n",'a','A');
    printf("%c\n",converti_maiuscole_minuscole('B'));
}

char converti_maiuscole_minuscole(char a){
    /* Converto in minuscole le lettere maiuscole */
    return 'a' + (a-'A');
}