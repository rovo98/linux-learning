#include <stdio.h>

#define true 1
#define false 0

/**************************************************
 *
 *sorting algorithm : quick sort
 *
 * A demo for basical quick sort.
 * ************************************************/

// helper for sorting.
void exch(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
// quick sort the array recursively.
// a[] : the unsorted array.
// lo  : the starting index of array.
// hi  : the ending index of array.
void sort(int a[], int lo, int hi)
{
    if (hi <= lo) return;
    int i = lo;
    int j = hi + 1;
    int v = a[lo];

    while (true)
    {
	while (a[++i] < v)
	   if (i == hi) break;
	while (v < a[--j])
	   if (j == lo) break; // redundant since a[lo] is sentinel.
	// check if pointers cross.
	if (j <= i)
	   break;
	exch(a, i, j);	
    }
    exch(a, lo, j);
    // sort the rest subarrays recursively.
    sort(a, lo, j-1);
    sort(a, j+1, hi);
}

// quick sort.
void quickSort(int a[], int len)
{
    sort(a, 0, len-1);
}


// Driver the program to test the methods above.
int main(int argc, char *argv[])
{
   int testArr[10] = {2, 4, 6, 5, 3,
	   9, 3, 4, 6, 8};
   int i;
   int len = sizeof(testArr)/sizeof(int);

   printf("The input test array is the following:\n");
   for (i = 0; i < len; i++)
       printf("%d ", testArr[i]);
   printf("\n");
   quickSort(testArr, len);
   
   printf("After calling the function:\n");
   for (i = 0; i < len; i++)
       printf("%d ", testArr[i]);
   printf("\n");

   return 0;

}
