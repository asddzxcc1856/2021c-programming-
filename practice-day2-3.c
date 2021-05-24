#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[10];

    scanf("%s",str);

    for (int i=0;i<10;i++)
    {
        if(islower(str[i]))
            putchar(toupper(str[i]));
        else if(isupper(str[i]))
            putchar(tolower(str[i]));
        else if(isalnum(str[i]))
            putchar(str[i]);
    }

    return 0;
}

