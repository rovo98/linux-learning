#include <stdio.h>

/***********************************
 *
 * Sorting Algorithm : selectionSort
 *
 * This is a demo for it.
 *
 *
 * author : rovo98
 *
 * **********************************/

void exch(int a[], int i, int j);
void sort(int a[], int n);


// functions defintions
// helper for sorting.
void exch(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
// selection sort.
void sort(int a[], int n) 
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		exch(a, min, i);
	}
}

// Driver the program to test the sorting method.
int main(int argc, char *argv[]) {
	int len = 5;
	int i;
	int a[] = {1, 5, 3, 2, 4};
	printf("The input test array is the following:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	sort(a, len);
	printf("After sorting, it beomces:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
