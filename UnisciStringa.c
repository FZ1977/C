#include <stdio.h>
#include <stdlib.h>

char *str_cat( char *a, char *b );
int str_len( char *a );

void main(){
	char a[] = "12345";
	char b[] = "abcde";
	char *p;

	str_cat(a, b);

	printf("%s, %d\n", c, str_len(c));
}

int str_len( char *a ){
	int len = 0;

	while( a[len] != '\0' ){
		len++;
	}
	return len;
}

char *str_cat( char *a, char *b ){
	int n_a = str_len(a), n_b = str_len(b);
	char *c;
	int size = (n_a+n_b+1)*sizeof(char);
	int i = 0, j;

	c = malloc(size);

	for(i=0; i<n_a; i++){
		c[i] = a[i];
	}

	j = 0;
	while(b[j] != '\0'){
		c[i] = b[j];
		i++;
		j++;
	}
	c[i] = '\0';
	return c;
}
