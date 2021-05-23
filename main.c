#include <stdio.h>

struct point{
    int x,y;
};

typedef struct point p;

struct detp{
    p p1;
    p p2;
};

typedef struct detp tp;

p makepoint(int n1,int n2);
p midpoint(p *n1,p *n2);

int main (void)
{
    tp src;
    p ans;

    src.p1 = makepoint(1,1);
    src.p2 = makepoint(3,3);

    ans = midpoint(&src.p1,&src.p2);

    printf("midpoint : (%d,%d)",ans.x,ans.y);

    return 0;
}

p makepoint(int n1,int n2)
{
    p tmp;
    tmp.x = n1;
    tmp.y = n2;
    return tmp;
}

p midpoint(p *n1,p *n2)
{
    p tmp;
    tmp.x = ((*n1).x + (*n2).x) / 2;
    tmp.y = ((*n1).y + (*n2).y) / 2;

    return tmp;
}
