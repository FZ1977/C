#include <stdio.h>

void main(){
	int MAXLINE=1000;
	char riga[MAXLINE];
	char c;
	int i=0;

	while((c=getchar())!=EOF && c!='\n'){
		riga[i++]=c;
	riga[i]='\0';
	}

	printf("\n");
	printf("%s\n",riga);
}
