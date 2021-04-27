#include <iostream>  // 示範 利用排序可以做的變化資料型態 通稱 => 多鍵值排序 + 內建資料結構pair 
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)//由大到小  兩項兩項之間都維持a>b
{
   return a.second > b.second;
}

bool cmp2(pair<int,int> a,pair<int,int> b)//由小到大  兩項兩項之間都維持a<b
{
   return a.second < b.second;
}

int main ()
{
   //宣告沒排序的p陣列 
   pair<int,int> p[5]={{1,30},{2,40},{3,20},{4,90},{5,80}};//第一項 : 學生編號 . 第二項 : 學生分數 
   
   
   //============================================================================================================
   
   
   //排序函式sort(array address , array address + 長度); 
   sort(p,p+5); 
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }
   
   
   //============================================================================================================

   
   //排序函式sort(array address , array address + 長度 , 比較函式); 
   sort(p,p+5,cmp);//由高分到低分 
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }
   
   
   //============================================================================================================
   
   
   //排序函式sort(array address , array address + 長度 , 比較函式); 
   sort(p,p+5,cmp2);//由低分到高分 
   
   
   //輸出 
   cout << "排序後結果 : \n";
   for (int i=0;i<5;i++)
   {
      cout << p[i].first << " " << p[i].second << "\n";
   }

}
