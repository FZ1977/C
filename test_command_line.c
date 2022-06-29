/* Passaggio parametri da linea di comando */

#include <stdio.h>

int main(int argc, char *argv[]){
	int pos=0;
	char *appo;
	/*
	for(int i=1; i<argc; i++){
		printf("%s ", argv[i]);
	}
	printf("\n");
	*/
	for(int i=1; i<argc; i++){
		appo = argv[i];
		for(int x=0; appo[x] != '\0'; x++){
			pos = pos^appo[x];
		}
		printf("%s - %d\n", appo, pos%3);
	}
}
