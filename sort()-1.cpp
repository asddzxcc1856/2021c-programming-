#include <iostream> //一般陣列排序用法
#include <algorithm>
using namespace std;

int main ()
{
   //宣告沒排序的c陣列 
   int c[5] = {5,3,4,2,1,36,4};
   
   //排序函式sort(array address,array address + 長度); 
   sort(c,c+5);
   
   //輸出 
   cout << "排序後結果 : "
   for (int i=0;i<5;i++)
   {
      cout << c[i] << " ";
   }
   
}
