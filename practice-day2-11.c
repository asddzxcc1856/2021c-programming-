#include <stdio.h>
#define LEN 20
#define WIDTH 20

int main (void)
{
    int c[LEN][WIDTH] = {0};

    c[1][1] = 1;

    for (int i=2;i<LEN;i++)
    {
        for(int j=1;j<=i;j++)
        {
            c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    for(int i=1;i<LEN;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
