#include <stdio.h>

void main(){
	char s[] = "programma in C";

	int i = 4;

	s[i] = 'R';
	s[i+1] = '\n';
	s[i+3] = '\0';

	printf("%s\n", s);

	printf("%c%c\n", s[8], s[9]);

	int len = 0;
	
	while (s[len] != '\0' ){
		len ++;
	}
	
	printf("la lunghezza della stringa e' %d", len);

}
