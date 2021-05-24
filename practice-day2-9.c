#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINE_LEN 40
#define NUM_WORDS 5000
char dic[NUM_WORDS][LINE_LEN];

int main (void)
{
    FILE *fp;
    int nw;
    int i;

    if( (fp = fopen("5000_words.txt","r")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    nw = 0;
    while(!feof(fp) && nw < NUM_WORDS)
    {
        fscanf(fp,"%s",dic[nw]);
        while(!feof(fp) && fgetc(fp) != '\n');
        nw++;
    }

    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        printf("%s\n",dic[rand()%NUM_WORDS]);
    }
    return 0;
}
