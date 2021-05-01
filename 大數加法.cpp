#include <iostream> //大數加法 處理超過一般資料型態可以儲存的位數 
using namespace std;

int main ()
{
   
   string a,b;
   
   int c[2000]; //儲存總和的陣列
   
   cin >> a >> b;
   
   int alen = a.length();
   int blen = b.length();
   
   
   //以下分成兩種情況處理
   
   if(alen>=blen) //如果a數字長度大於b數字長度 
   {
      //把a放進陣列再換b放進陣列 
      for (int i=0;i<alen;i++)
      {
         c[i] = (a[i]-48);
      }
      for (int j=alen,i=blen;j>=alen-blen;j--,i--)
      {
         c[j] += (b[i]-48);
      }
      //處理進位 
      for (int i=alen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //輸出 
      for (int i=0;i<alen;i++)
      {
         cout << c[i];
      }
   }
   else if(blen>alen) //如果b數字長度大於a數字長度 
   {
      //把b放進陣列再換a放進陣列
      for (int i=0;i<blen;i++)
      {
         c[i] = (b[i]-48);
      }
      for (int j=blen,i=alen;j>=blen-alen;j--,i--)
      {
         c[j] += (a[i]-48);
      }
      //處理進位 
      for (int i=blen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //輸出 
      for (int i=0;i<blen;i++)
      {
         cout << c[i];
      }
   }
   
   
   
}
