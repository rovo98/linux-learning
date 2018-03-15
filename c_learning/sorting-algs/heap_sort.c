#include<stdio.h>

/************************************
 * sorting Algorithm : heap sort.
 *
 * author: rovo98
 * *************************************/


// This is a demo for heapSort.
/*************************************
 * helper for sorting.
 * ***********************************/
void exch(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
// sink operation.
void sink(int a[], int k, int n) {
	while (2 * k < n) {
		int j = 2 * k;
		if (j < n-1 && a[j] < a[j+1])
			j++;
		if (a[k] >= a[j])
			break;
		exch(a, k, j);
		k = j;
	}
}
// heap sort.
void sort(int a[], int len) {
	int k;
	int n = len;
	for (k = n/2; k>=0; k--) {
		sink(a, k, n);
	}
	while (n >= 0) {
		exch(a, 0, --n);
		sink(a, 0, n);
	}
}
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
