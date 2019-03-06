#include <stdio.h>

/************************************************************
* knowing about the size of the basical data type in c lang.
*************************************************************/
int main(int argc, char* argv[])
{
    char c;
    double d;
    float f;
    int i;
    long l;
    long long ll;

    printf("char: %ld\n", sizeof(c));
    printf("double: %ld\n", sizeof(d));
    printf("float: %ld\n", sizeof(f));
    printf("int: %ld\n", sizeof(i));
    printf("long: %ld\n", sizeof(l));
    printf("long long: %ld\n", sizeof(ll));
    return 0;
}
