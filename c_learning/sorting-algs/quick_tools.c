#include "quick.h"
#include <stdio.h>

/************************************************************
 *
 * quick sorting algorithm tool functions.
 *
 * author : rovo98
 * **********************************************************/


void sort(int a[], int len) {
	quick_sort(a, 0, len-1);
}
void quick_sort(int a[], int lo, int hi) {
	if (hi <= lo) return;
	int i = lo;
	int j = hi+1;
	int pivot = a[lo];

	while (true) {
		while (a[++i] < pivot)
			if (i == hi) break;
		while (a[--j] > pivot)
			if (j == lo) break; // redundant since a[lo] is sentinel.
		if (i >= j)	break;
		exch(a, i, j);
	}
	// check if pointer cross.
	if (j > lo) exch(a, j, lo);
	quick_sort(a, lo, j-1);
	quick_sort(a, j+1, hi);
}

void exch(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
