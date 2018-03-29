#include "merge.h"
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

	sort(a, aux, len);
	printf("After calling mergeSort function, it becomes:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
