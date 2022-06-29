/* test funzione hash */

#include <stdio.h>

int main(int argc, char **args){
	int i, pos = 0; /* l'indice di output*/
	
	printf("%d\n", argc);
	
	for(pos=0; pos<argc; pos++){
		printf("%s", args[pos]);
	}
	
    /*
    for(i = 0; argv[i] != '\0'; i++){
        pos = pos^argv[i];
        printf("pos %d - char - %c\n", pos, argv[i]);
	}
	* 
	* */
}
