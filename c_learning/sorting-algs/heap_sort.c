#include "heap.h"
#include<stdio.h>

/************************************
 * sorting Algorithm : heap sort.
 *
 * author: rovo98
 * *************************************/


// This is a demo for heapSort.

// Driver the method to test the methods above.
int main(int argc, char *argv[])
{
	int a[] = {1, 4, 6, 7, 8, 4, 3};
	int len = 7;
	int i;
	printf("The test array is the following:\n");
	for (i = 0; i < len; i++) {
	       printf("%d ", a[i]);
	}
	printf("\n");
	sort(a, len);

	printf("After calling the function:\n");
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
