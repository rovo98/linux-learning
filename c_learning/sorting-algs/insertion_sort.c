#include "insertion.h"
#include <stdio.h>

/***************************************
 *
 * Sorting Algorithm : insertionSort
 *
 * this is a demo for it.
 *
 * author : rovo98
 *
 * **************************************/



//Driver the program to test the insertion sort method.
int main(int argc, char *argv[]) {
	int i;
	int len = 5;
	int a[] = {1, 4, 3, 2, 5};
	printf("The input test array is the following:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	sort(a, len);
	printf("After sorting, it becomes:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}

