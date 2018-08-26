#include "heap.h"
#include <stdio.h>


/***********************************************************
 *
 * heap sort tool functions.
 *
 * author : rovo98
 *
 * *********************************************************/

// sink operation.
void sink(int a[], int k, int len) {
	int j;
	while (2 * k < len) {
		j = 2 * k;
		if (j < len-1 && a[j] < a[j+1]) // ascending order.
			j++;
		if (a[k] >= a[j]) break;
		exch(a, k, j);
		k = j;
	}
}
// sort helper function.
void exch(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] =temp;
}
// heap sort.
void sort(int a[], int len) {
	int i;
	int n = len;
	for (i = n / 2; i >= 0; i--) {
		sink(a, i, n);
	}
	while (n > 0) {
		exch(a, 0, --n);
		sink(a, 0, n);
	}
}
