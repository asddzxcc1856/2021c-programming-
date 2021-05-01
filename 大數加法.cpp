#include <iostream> //计猭 
using namespace std;

int main ()
{
   
   string a,b;
   
   int c[2000];
   
   cin >> a >> b;
   
   int alen = a.length();
   int blen = b.length();
   
   
   if(alen>=blen) //狦a计b计 
   {
      //рa秈皚传b秈皚 
      for (int i=0;i<alen;i++)
      {
         c[i] = (a[i]-48);
      }
      for (int i=0;i<blen;i++)
      {
         c[i] += (b[i]-48);
      }
      //矪瞶秈 
      for (int i=alen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //块 
      for (int i=0;i<alen;i++)
      {
         cout << c[i];
      }
   }
   else if(blen>alen) //狦b计a计 
   {
      //рb秈皚传a秈皚
      for (int i=0;i<blen;i++)
      {
         c[i] = (b[i]-48);
      }
      for (int i=0;i<alen;i++)
      {
         c[i] += (a[i]-48);
      }
      //矪瞶秈 
      for (int i=blen-1;i>=0;i--)
      {
         if(c[i]>=10)
         {
            c[i-1] = c[i] / 10;
            c[i]%=10; 
         }
      }
      //块 
      for (int i=0;i<blen;i++)
      {
         cout << c[i];
      }
   }
   
   
   
}
