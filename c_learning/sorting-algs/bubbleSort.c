#include <stdio.h>

/***************************************
 * Sorting Algorithm : bubbleSort
 *
 * This a demo for it.
 *
 * author: rovo98
 * *************************************/

#define true 1
#define false 0


void sort(int a[], int len) {
	int flag = true;
	int i, j, temp;

	for (i = 1; i < len&&flag; i++)
	{
		flag = false;
		for (j = 0; j < len-i; j++)
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = true;
			}
	}
}

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

