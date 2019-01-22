#include "merge.h"
#include <stdio.h>


/***************************************************
 *
 * merge sort tool functions.
 *
 * author : rovo98
 *
 * ************************************************/

void sort(int a[], int aux[], int len) {
	merge_sort(a, aux,  0, len-1);
}

void merge_sort(int a[], int aux[], int lo, int hi) {
	if (hi <= lo) return;
	int mid = lo + (hi - lo) / 2;

	merge_sort(a, aux, lo, mid);
	merge_sort(a, aux, mid+1, hi);
	merge(a, aux, lo, mid, hi);
}

void merge(int a[], int aux[], int lo, int mid, int hi) {
	// check if subarrays is already sorted.
	if (a[mid] < a[mid+1]) return;
	int i = lo;
	int j = mid+1;
	int k;

	// copy a[lo .. hi] to aux[lo .. hi]
	for (k = lo; k <= hi; k++) {
		aux[k] = a[k];
	}
	for (k = lo; k <= hi; k++) {
		if 	(j > hi)	  a[k] = aux[i++];
		else if (i > mid) 	  a[k] = aux[j++];
		else if (aux[i] < aux[j]) a[k] = aux[i++];
		else 			  a[k] = aux[j++];
	}
}
