#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_by_vocals(char *s){
	int i, j, len;

	len=strlen(s);
	printf("Lunghezza della stringa %d\n", len);

	char *mio_array=malloc(sizeof(s)*len);	
	
		
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
				mio_array[j]=s[i];
				j++;
		} 
	}
		
	for(i=0; s[i]!='\0'; i++){
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			mio_array[j]=s[i];
            j++;
		} 
	}
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='*'){
			mio_array[j]=s[i];
			j++; 
		} 
	}
	
	for(i=0; s[i]!='\0'; i++){	
		if(s[i]=='-'){
            mio_array[j]=s[i];
            j++;
		} 
	}
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='.'){
	        mio_array[j]=s[i];
		    j++;
		} 
	}
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]>='0' && s[i]<='9'){
			mio_array[j]=s[i];
			j++;
		}
	} 
		
	for(i=0; s[i]!='\0'; i++){
		if((s[i]>=65 && s[i]<=90) && (s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')){
			mio_array[j]=s[i];
            j++;
		} 
	}
	
	for(i=0; s[i]!='\0'; i++){
		if((s[i]>=97 && s[i]<=122) && (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')){
		    mio_array[j]=s[i];
            j++;
		}
	}

	char temp = mio_array[9];
	mio_array[9] = mio_array[10];
	mio_array[10] = temp;
	
	for(i=11; i<len-1; i++){
		for(j=i+1; j<len; j++){
			if(mio_array[i]>mio_array[j]){
				char temp = mio_array[i];
				mio_array[i] = mio_array[j];
				mio_array[j] = temp;
			} 
		}
	}
	
for(int x=0; x<len; x++){
	printf("%c", mio_array[x]);
}

printf("\n");
}
