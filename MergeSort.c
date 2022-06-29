/* Algoritmo di ordinamento Merge Sort */

#include <stdio.h>

void stampa(int a[], int len);
void MergeSort(int arr[], int l, int r);
void Merge(int arr[], int l, int m, int r);

int main(){
	int a[] = {6,5,3,1,8,7,2,9,4};
	int p, q;
	
	int len = sizeof(a)/sizeof(int);

	p=0;
	q=len-1;
	
	printf("Merge Sort\n");
	printf("La dimensione del vettore e' %d\n", len);
	stampa(a, len);
	printf("--> Vettore iniziale\n");
	printf("\n");

	MergeSort(a, p, q);
	
	stampa(a, len);
}

void stampa(int a[], int len){
	for(int i=0; i<len; i++){
		printf("%d ", a[i]);
	}
}

void Merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void MergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
 
        Merge(arr, l, m, r);
    }
}
