#include <stdio.h> // 二進位 轉 十進位 實作 -c

int main (void)
{
    unsigned n = 2147483646;
    unsigned long t = 1 << 31;

    int m = 31;
    while(m>=0)
    {

        if(n>=t)
        {

            printf("%d", 1);
            n-=t;
        }
        else
        {
            printf("%d", 0);
        }
        t = t >> 1;
        m--;



    }


    return 0;
}
