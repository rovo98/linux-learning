#include <stdio.h>

/***********************************
 *
 * Sorting Algorithm : mergeSort
 *
 *
 * This is a demo for it.
 *
 *
 * author : rovo98
 *
 * *********************************/
// merge method for mergeSort.
void merge(int a[], int aux[], int lo, int mid, int hi)
{
	int i = lo;
	int j = mid + 1;
	int k;

	for (k = lo; k <= hi; k++)
		aux[k] = a[k];

	for (k = lo; k <= hi; k++)
	{
		if (j > hi)
			a[k] = aux[i++];
		else if (i > mid)
			a[k] = aux[j++];
		else if (aux[j] < aux[i])
			a[k] = aux[j++];
		else 
			a[k] = aux[i++];
	}
}
void sort(int a[], int aux[], int lo, int hi)
{
	int mid;
	if (hi <= lo) return;
	mid = lo + (hi - lo) / 2;
	sort(a, aux, lo, mid);
	sort(a, aux, mid+1, hi);
	merge(a, aux, lo, mid, hi);
}

// Driver the program to test the methods above.
int main(int argc, char *argv[])
{
	int i;
	int a[] = {3, 2, 1, 4, 5};
	int len = sizeof(a)/sizeof(int);
	int aux[len];
	// initializes the auxiluary array for merge sort.
	for (i = 0; i < len; i++)
		aux[i] = 0;

	printf("The input test array is the following:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	sort(a, aux, 0, len-1);
	printf("After calling mergeSort function, it becomes:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
