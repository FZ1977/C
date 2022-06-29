/**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rovescia(char *a);

void main(){
	char *a = "Stringa";
	
	char *res = rovescia(a);
	
	printf("%s\n",a);
	printf("%s",res);
}

char *rovescia(char *a){
	int len = strlen(a)-1, i=0;
	char *r;
	
	r = malloc(sizeof(char)*(len));
	
	for(;len>=0;len--){
		r[len]=a[i];
		i++;
	}
	
	return r;
}
