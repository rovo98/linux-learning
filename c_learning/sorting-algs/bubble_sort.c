#include "bubble.h"
#include <stdio.h>

/***************************************
 * Sorting Algorithm : bubbleSort
 *
 * This a demo for it.
 *
 * author: rovo98
 * *************************************/

// Driver  the program to test the bubble sort method.
int main(int argc, char *args[]) {
	int i;
	int len = 6;
	int a[]	= {1, 3, 5, 7, 3, 2};
	printf("The input test array is the following:\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	sort(a, len);
	printf("After sorting, it becomes:\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

