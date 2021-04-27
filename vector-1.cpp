#include <iostream> // ¤Gºûvector
#include <vector>
using namespace std;

int main ()
{
   vector<vector<int> > v;
   for (int i=0;i<3;i++)
   {
      vector<int> v2;
      for (int j=0;j<3;j++)
      {
         int a;
         
         cin >> a;
         v2.push_back(a);
       
      }
      v.push_back(v2);
   }
   
   for (int i=0;i<3;i++)
   {
      for (int j=0;j<3;j++)
      {
         cout << v[i][j] << " ";
      }
      cout << "\n";
   }
   
}

/*

1 3 5
7 9 10
11 61 4

*/
