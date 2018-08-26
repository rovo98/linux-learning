#include "insertion.h"
#include <stdio.h>

/*************************************************
 *
 * insertion sorting algorithm tool functions.
 *
 * author : rovo98
 * ***********************************************/

void sort(int a[], int len) {
	int i, j, key;
	for (i = 1; i < len; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0&&key < a[j]) {
			a[j+1] = a[j];
			j -= 1;
		}
		a[j+1] = key;
	}
}
