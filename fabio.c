#include <stdio.h>

void stampa(char *a);

int main(int argc, char **argv){
	for(int i=1; i<argc; i++){
		stampa(argv[i]);
	}
}

void stampa(char *a){
	printf("Sono nella funzione stampa\n");
	printf("Stampo la stringa %s\n",a);
	for(int i=0; a[i]!='\0'; i++){
		printf("%c",a[i]);
	}
	printf("\n");
}
