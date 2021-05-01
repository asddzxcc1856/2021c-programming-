#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[20],int L,int R,int index)
{
   if(L<=R)
   {
      int m = (L + R) / 2; //每次都砍一半找
      
      if(arr[m]==index) //如果找到就回傳位置m
      {
         return m;
      }
      else if(arr[m]>index) //如果發現目前的位置比要找的數字大就把範圍變成 L~m-1 => 因為陣列的數字是由小排到大 所以要往左邊找
      {
         return binary_search(arr,L,m-1,index);
      }
      else if(arr[m]<index) //如果發現目前的位置比要找的數字小就把範圍變成 m+1~R => 因為陣列的數字是由小排到大 所以要往右邊找
      {
         return binary_search(arr,m+1,R,index);
      }
   }
}

int main ()
{
   int c[20]={1,3,4,8,7,9,5,4,6,7,14,5,6,7,9,41,45,45,6,48};
   
   sort(c,c+20);
     
   int index = 41;
   
   
   cout << "找出41在陣列中的位置0~19的  : [ " << binary_search(c,0,19,index) << " ]";
   
   
   
}
