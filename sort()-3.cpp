#include <iostream>  // 示範 利用排序可以做的變化資料型態 通稱 => 多鍵值排序 + 自訂義資料結構 
#include <algorithm>
using namespace std;

struct s{
   int num;
   int score;
};

bool cmp(s a,s b)//由大到小  兩項兩項之間都維持a>b
{
   return a.score > b.score;
}

bool cmp2(s a,s b)//由小到大  兩項兩項之間都維持a<b
{
   return a.score < b.score;
}

int main ()
{
   s p[5]={{1,80},{2,60},{3,40},{4,90},{5,85}};
   
   //============================================================================================================
/*   
   //自訂義資料結構struct 無法直接使用內建排序函式 必須定義排序函式!! 
   
   //排序函式sort(array address , array address + 長度); 

   sort(p,p+5);
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
   
*/ 
   //============================================================================================================
   
   
   //排序函式sort(array address , array address + 長度 , 比較函式); 
   sort(p,p+5,cmp);//由高分到低分 
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
   
   
   //============================================================================================================
   
   
   //排序函式sort(array address , array address + 長度 , 比較函式); 
   sort(p,p+5,cmp2);//由低分到高分 
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].num << " " << p[i].score << "\n";
   }
}
