#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int arrlen=10;
    arr = (int*)malloc(arrlen * sizeof(int));

    for (int i=0;i<arrlen;i++)
    {
        arr[i] = i;
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
}
