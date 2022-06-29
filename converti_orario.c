/*Conversione orario da secondi a h:m:s*/

#include <stdio.h>
#include <stdlib.h>

void split_time(long int tot_sec, int *h, int *m, int *s);

void main(){
	int tot_sec=3665;
	int *h, *m, *s;
	h = tot_sec/3600;
	m = (tot_sec%3600)/60;
	s = (tot_sec%3600)%60;
	split_time(tot_sec, h, m, s);
}

void split_time(long int tot_sec, int *h, int *m, int *s){
	printf("Tot_sec: %ld - Ore: %d Minuti: %d Secondi: %d\n",tot_sec, h, m, s);
}
