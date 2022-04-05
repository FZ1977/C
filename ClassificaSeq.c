#include <stdio.h>

/*
Si scriva un programma in linguaggio C per poter analizzare una sequenza di numeri.
Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi
risultati:
• quanti sono i numeri positivi, nulli e negativi
• quanti sono i numeri pari e dispari
• se la sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né decrescente.
*/

void num_pos_neg( int *p );
void num_par_dis( int *p );
void seq_cre_dec( int a[] );

void main(){
	int number[6], i = 0, a = 0, *p;
	
	while( i<5 ){
		printf("Inserisci un valore: ");
		scanf("%d", &a);
		number[i] = a;
		i++;
	}	

	p = &number[0];
	
	num_pos_neg( p );
	num_par_dis( p );
	seq_cre_dec( number );
}

void num_pos_neg( int *p ){
	int i = 0, cnt_p = 0, cnt_n = 0, cnt_z = 0;
	while( i<5 ){
		if( *p > 0 ){
			cnt_p++;	
		} else if( *p < 0 ){
			cnt_n++;
		} else if( *p == 0 ){
			cnt_z++;
		} 
		p++;
		i++;
	}
	printf("\n");
	printf("Numeri positivi: %d\n", cnt_p);
	printf("Numeri negativi: %d\n", cnt_n);
	printf("Numeri nulli: %d\n", cnt_z);
}

void num_par_dis( int *p ){
	int i = 0, cnt_p = 0, cnt_d = 0;
        while( i<5 ){
                if( *p%2 == 0 ){
                        cnt_p++;
                } else {
                        cnt_d++;
                }
                p++;
                i++;
        }
        printf("\n");
        printf("Numeri pari: %d\n", cnt_p);
        printf("Numeri dispari: %d\n", cnt_d);
}

void seq_cre_dec( int a[] ){
	int i = 0, res_c = 0, res_d = 0, res = 0;
        while( i<4 ){
		printf("%d - %d\n", a[i], a[i+1]);
		if(a[i]<a[i+1]){
			res_c++;
		} else if(a[i]>a[i+1]){
			res_d++;
		} else {
			res++;
		}
                i++;
        }
	if( res_c == 0 && res_d != 0){
		printf("Sequenza di numeri decrescente!\n");
	} else if ( res_c != 0 && res_d != 0 || res != 0){
		printf("Sequenza di numeri ne crescente ne decrescente!\n");
	} else {
		printf("Sequenza di numeri crescente!\n");
	}
        printf("\n");
}
