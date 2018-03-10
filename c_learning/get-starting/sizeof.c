#include <stdio.h>

/************************************************************
* knowing about the size of the basical data type in c lang.
*************************************************************/
int main(int argc, char *argv[])
{
	char c;
	double d;
	float f;
	int i;
	long l;
	long long ll;

	printf("char: %d\n", sizeof(c));
	printf("double: %d\n",sizeof(d));
	printf("float: %d\n", sizeof(f));
	printf("int: %d\n", sizeof(i));
	printf("long: %d\n", sizeof(l));
	printf("long long: %d\n", sizeof(ll));
	return 0;
}
