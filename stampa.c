void stampa(char *a){
	printf("Sono nella funzione stampa\n");
	for(int i=0; a[i]!='\0'; i++){
		printf("%c",a[i]);
	}
	printf("\n");
}
