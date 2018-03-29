#include "shell.h"
#include <stdio.h>

/*********************************
 *
 *
 * Sorting Algorithm : shellSort
 *
 * This is a demo for it.
 *
 * author : rovo98
 *
 * *******************************/

// Driver the program to test the method.
int main(int argc, char *argv[])
{
	int len = 5;
	int i;
	int a[] = {1, 4, 2, 3, 5};
	printf("The input test array is the following:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	sort(a, len);
	printf("After using shellSort, it becomes:\n");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
