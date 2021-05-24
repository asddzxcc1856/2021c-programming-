#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct point{ //儲存 [點座標] 的資料型態 //自訂義資料型態名稱

    float x,y;

}p;


void input(p*,p*);
void distance(p*,p*);
void slope(p*,p*);


int main (void) // 主程式
{
    p a1,a2;

    input(&a1,&a2);

    distance(&a1,&a2);

    slope(&a1,&a2);

    return 0;
}

void input(p* a1,p* a2) // 輸入
{
    printf("please enter two point x & y location:\n");

    scanf("%f%f%f%f",&a1->x,&a1->y,&a2->x,&a2->y);
}

void distance(p* a1,p* a2) // 求兩點距離
{
    printf("two points' distance : %f\n", sqrt(pow((a1->x-a2->x),2)+pow((a1->y-a2->y),2)));
}

void slope(p* a1,p* a2) // 求斜率、斜率方程式、法線方程式
{
    printf("two points' slope : %f\n", ((*a1).x-(*a2).x)/((*a1).y-(*a2).y));

    printf("two points' Slope equation : %+2.2fx + %2.2fy = %2.2f\n",-((*a1).y-(*a2).y),((*a1).x-(*a2).x),(-((*a1).y-(*a2).y))*(*a1).x+((*a1).x-(*a2).x)*(*a1).y);

    printf("two points' normal equation : %+2.2fx + %2.2fy = %2.2f\n",((*a1).x-(*a2).x),((*a1).y-(*a2).y),((*a1).x-(*a2).x)*(*a1).x+((*a1).y-(*a2).y)*(*a1).y);
}
