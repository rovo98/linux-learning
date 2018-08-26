#include "selection.h"
#include <stdio.h>

/*********************************************
 * selection sorting algorithm tool functions.
 * 
 * author: rovo98
 * *******************************************/

void exch(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void sort(int a[], int len)
{
	int i, j, min;
	for (i = 0; i < len; i++) {
		min = i;
		for (j = i+1; j < len; j++) {
			if (a[j] < a[min])
				min = j;
		}
		exch(a, min, i);
	}
}
