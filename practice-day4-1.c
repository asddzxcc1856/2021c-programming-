#include <stdio.h>

int main (void)
{
    int *a;

    int row = 3;
    int col = 11;

    a = (int *)malloc(row * col * sizeof(int));
    for (int i = 0;i < row * col;i++)
        a[i] = i+1;

    int **b;

    b = (int **)malloc(row * sizeof(int*));

    for (int i=0;i<row;i++)
        b[i] = &a[i*col];

    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    free(a);

    free(b);

    return 0;
}
