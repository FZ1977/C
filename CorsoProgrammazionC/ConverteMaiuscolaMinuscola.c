/*Converti maiuscola in minuscola e viceversa*/

char Convert(char);

int main(){
    char *c = "StRiNgA";
    int i=0;

    printf("%s\n", c);

    while(c[i] != '\0'){
        printf("%c",Convert(c[i]));
        i++;
    }

    return 0;
}

char Convert(char c){
    if(c >= 'a' && c<='z'){
        return 'A' + (c - 'a');
    }

    if(c>= 'A' && c<='Z'){
        return 'a' + (c - 'A');
    }
}
