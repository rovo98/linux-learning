#include <stdio.h>
#include <unistd.h>

/*******************************************
* for loop demo. 
* percent complete demo.
********************************************/

int main(int argc, char* argv[])
{
    int i;

    for (i = 0; i <= 100; i++) {
        printf("Percent complete: %d\%\r", i);
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
    return 0;
}
