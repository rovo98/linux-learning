#include "bubble.h"
#include <stdio.h>

/**********************************************
 * sorting tools for bubble sorting algorithm.
 *
 * author : rovo98
 * ********************************************/

void sort(int a[], int len)
{
	int flag = true;
	int i, j;

	for (i = 1; i < len&&flag; i++)
	{
		flag = false;
		for (j = 0; j < len-i; j++)
		{
			if (a[j] > a[j+1])
			{
				exch(a, j, j+1);
				flag = true;
			}
		}
	}
}
void exch(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
