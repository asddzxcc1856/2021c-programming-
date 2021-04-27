#include <iostream>
#include <cstring>
using namespace std;

int c[3][3]={{2,2,2},{2,2,2},{2,2,2}};
int d[3][3]={{2,2,2},{2,2,2},{2,2,2}}; 
int s[3][3];

void add()
{
   memset(s,0,sizeof(s));
   for (int i=0;i<3;i++)
   {
      for (int j=0;j<3;j++)
      {
         s[i][j] = c[i][j] + c[i][j];
      }
   }
}

void sub()
{
   memset(s,0,sizeof(s));
   for (int i=0;i<3;i++)
   {
      for (int j=0;j<3;j++)
      {
         s[i][j] = c[i][j] - c[i][j];
      }
   }
}

void mul()
{
   memset(s,0,sizeof(s));
   for (int i=0;i<3;i++)
   {
      for (int j=0;j<3;j++)
      {
         for (int k=0;k<3;k++)
         {
            s[i][j] += c[i][k] * d[k][j];
         }
      }
   }
}

void print()
{
   for (int i=0;i<3;i++)
   {
      for (int j=0;j<3;j++)
      {
         cout << s[i][j] << " ";
      }
      cout << "\n";
   }
}

int main ()
{
   add();
   print();
   sub();
   print();
   mul();
   print();
} 
