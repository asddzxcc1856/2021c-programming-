#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int* ptd;


    int a[10] = {1,3,5,7,9,11,13,15,17,19};

    ptd = (int*)malloc( 10 * sizeof(int));

    printf("%p\n",ptd);

    free(ptd);
}
