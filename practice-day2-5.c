#include <stdio.h>
#define WIDTH 40

int sum(int *,int );

int main(void)
{

    int a[10] = {1,3,5,7,9,11,13,15,17,19};

    int total;

    total = sum(a,0);

    printf("%d\n",total);

    return 0;
}

int sum(int *ap,int all)
{

    for (int i=0;i<10;i++)
    {
        all += ap[i];
    }

    return all;

}
