#include "quick.h"
#include <stdio.h>

/**************************************************
 *
 *sorting algorithm : quick sort
 *
 * A demo for basical quick sort.
 * ************************************************/

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
   sort(testArr, len);
   
   printf("After calling the function:\n");
   for (i = 0; i < len; i++)
       printf("%d ", testArr[i]);
   printf("\n");

   return 0;

}
