/*
 * Funzione getline che ritorna la lunghezza delle righe.
 * */

#include <stdio.h>
#include <stdlib.h>

int get_line(char *line);

void main(){
	char *line;
	int len;
	
	line = malloc(sizeof(char)*100);
	
	len = get_line(line);
	printf("Lunghezza della riga %d: \n",len);
}

int get_line(char *line){
	char c;
	int i=0;
	
	while((c=getchar()) != EOF && c != '\n'){
		line[i]=c;
		i++;
	}
	if(c=='\n'){
		line[i]='\n';
		i++;
	}
	line[i]='\0';
	
	return i;
}
