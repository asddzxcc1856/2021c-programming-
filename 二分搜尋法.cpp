#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[20],int L,int R,int index)
{
   if(L<=R)
   {
      int m = (L + R) / 2;
      
      if(arr[m]==index)
      {
         return m;
      }
      else if(arr[m]>index)
      {
         return binary_search(arr,L,m-1,index);
      }
      else if(arr[m]<index)
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
