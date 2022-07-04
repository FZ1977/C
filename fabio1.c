#include <stdio.h>

void main(){
	char *a = "A";
	
	printf("%d - %c\n", *a, *a);
	printf("%d - %c\n", *a+"A", *a+"A");
	
}
