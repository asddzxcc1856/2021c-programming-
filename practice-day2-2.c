#include <stdio.h>

int main(void)
{
    char str[8];
    //當作字串輸入
    scanf("%s",str);
    //當作字串輸出
    printf("%s\n",str);
    //當作字元輸出
    for (int i=0;i<8;i++)
    {

        printf("%c",str[i]);
    }
    printf("\n");
    //當作數字輸出
    for (int i=0;i<8;i++)
    {

        printf("%d",str[i] - '0');
    }
    printf("\n");
    return 0;
}
