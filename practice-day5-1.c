#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a,const void *b)
{
    return *(int*)a > *(int*)b ? 1 : -1;
}

int main (void)
{
    int c[5][5];

    srand(time(NULL));

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            c[i][j] = rand()%1000+1;
        }
    }
    qsort(c,25,sizeof(int),cmp);
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
