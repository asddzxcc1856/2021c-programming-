#include <iostream>//引用輸出
#include <cstring>//引用memset()
using namespace std;

int c[3][3]={{2,2,2},{2,2,2},{2,2,2}};//c矩陣 3*3
int d[3][3]={{2,2,2},{2,2,2},{2,2,2}};//d矩陣 3*3
int s[3][3];//s矩陣 3*3 存結果

void add()//相加
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

void sub()//相減
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

void mul()//相乘
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

void print()//輸出
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
   add();//相加
   print();//輸出
   
   sub();//相減
   print();//輸出
   
   mul();//相乘
   print();//輸出
} 
