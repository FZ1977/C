#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rimuovi_stringa(char *a, char *b){
	int i, j=0, len_a, len_b, pos_finale, pos_iniziale;
	len_a = strlen(a);
	len_b = strlen(b);
	
	for(i=0; i<len_a; i++){
		if(a[i]==b[j]){
			j++;
			if(j==len_b){
				pos_finale = i;
				pos_iniziale = pos_finale - len_b;
				
				for(i=pos_iniziale+1; i<pos_finale+1; i++){
					a[i] = (char)NULL;
				}
				
				for(i=0; i<len_a; i++){
					printf("%c",a[i]);
				}
				printf("\n");
						
				return 1;
			}
		} else {
			j=0;
		} 
	}
	return 0;
	
	
}
