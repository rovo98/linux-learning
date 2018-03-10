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

// shell sort. using sequence from algs4.
void sort(int a[], int n)
{
	int h = 1;
	int i, j, key;

	while (h < n/3)
		h = 3 * h + 1; // 1, 4, 13, 40, 121, ...
	while (h >= 1)
	{
		for (i = h; i < n; i++)
		{
			key = a[i];
			for (j = i-h; j >= 0 && key < a[j]; j -= h)
				a[j+h] = a[j];
			a[j+h] = key;
		}
		h /= 3;
	}
}

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
