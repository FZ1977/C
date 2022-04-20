#include <stdio.h>

int conta_minuscole(char *x);

void main(){
	char w[] = "pr0graMMazioNe PythON";

	int res = conta_minuscole(w);

	printf("%s\n", w);
	printf("Il numero di lettere minuscole e': %d\n", res);
}

int conta_minuscole(char *x){
	int cnt=0, i=0;

	while(x[i]!='\0'){
		if(x[i] >= 'a' && x[i] <= 'z'){
			cnt++;	
		}
		i++;
	}
	return cnt;
}
