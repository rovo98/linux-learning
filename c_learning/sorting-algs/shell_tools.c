#include "shell.h"
#include <stdio.h>

/***********************************************
 * A navie implementation of shell sorting algorithm.
 *
 * author: rovo98
 * ***************************************************/
void sort(int a[], int len) {
	int i, j, key;
	int h = 1;
	while (h < len)
		h = 3 * h + 1; // 1, 4, 13, 40, 121, ...
	while (h >= 0) {
		for (i = h; i < len; i++) {
			key = a[i];
			j = i - h;
			while (j >= 0&&key < a[j]) {
				a[j+h] = a[j];
				j -= h;
			}
			a[j+h] = key;
		}
		h /= 3;
	}
}
