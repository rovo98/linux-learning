#include "selection.h"
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
