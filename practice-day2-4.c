#include <stdio.h>
#define WIDTH 40
void starbar(void);

int main(void)
{
    starbar();

    printf("%s\n","Hellow,i'm very happy.");
    printf("%s\n","How are you?");

    starbar();

    return 0;
}

void starbar(void)
{
    int cnt;
    for (cnt=1;cnt<=WIDTH;cnt++)
        putchar('*');
    putchar('\n');
}
