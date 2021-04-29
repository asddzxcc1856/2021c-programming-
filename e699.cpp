#include <iostream>  //BFS練習
#include <queue>
#include <cstring>
using namespace std;

int m,n;
char adj[1005][1005];
int fadj[1005][1005];
bool vis[1005][1005];
int mx[4]={1,-1,0,0};
int my[4]={0,0,1,-1};
bool ok;
int ans;


void bfs(int nx,int ny)
{
   queue<int> qx,qy,qt;
   
   qx.push(nx);
   qy.push(ny);
   qt.push(0);
   
   
   memset(vis,false,sizeof(vis));
   vis[nx][ny]=true;
   for (int i=0;i<1005;i++)
   {
      for (int j=0;j<1005;j++)
      {
         fadj[i][j]=2147483467;
      }
   }
   
   
   while(!qx.empty())
   {
      int nnx = qx.front();
      qx.pop();
      int nny = qy.front();
      qy.pop();
      int nnt = qt.front();
      qt.pop();
      for (int i=0;i<4;i++)
      {
         int nnnx = nnx + mx[i];
         int nnny = nny + my[i];
         if((nnnx>=0&&nnnx<m)&&(nnny>=0&&nnny<n)&&(adj[nnnx][nnny]=='.'||adj[nnnx][nnny]=='J')&&vis[nnnx][nnny]==false)
         {
            fadj[nnnx][nnny] = min(nnt,fadj[nnnx][nnny]);
            vis[nnnx][nnny] = true;
            qx.push(nnnx);
            qy.push(nnny);
            qt.push(nnt+1);
         }
      }
   }
}

void bfs2(int nx,int ny)
{
   
   queue<int> qx,qy,qt;
   
   qx.push(nx);
   qy.push(ny);
   qt.push(0);
   
   memset(vis,false,sizeof(vis));
   vis[nx][ny]=true;
   
   while(!qx.empty())
   {
      int nnx = qx.front();
      qx.pop();
      int nny = qy.front();
      qy.pop();
      int nnt = qt.front();
      qt.pop();
      for (int i=0;i<4;i++)
      {
         int nnnx = nnx + mx[i];
         int nnny = nny + my[i];
         if((nnnx>=0&&nnnx<m)&&(nnny>=0&&nnny<n)&&fadj[nnnx][nnny]>nnt&&(adj[nnnx][nnny]=='.'||adj[nnnx][nnny]=='J')&&vis[nnnx][nnny]==false)
         {
            vis[nnnx][nnny] = true;
            qx.push(nnnx);
            qy.push(nnny);
            qt.push(nnt+1);
         }
         else if(((nnnx<0||nnnx>=m)||(nnny<0||nnny>=n)))
         {
            ok=true;
            ans=min(nnt+1,ans);
         }
      }
   }
}



int main ()
{
   int t;
   while(cin >> t )
   {
      for (int k=0;k<t;k++)
      {
         cin >> m >> n;
         queue<int> fqx,fqy,jqx,jqy;
         for (int i=0;i<m;i++)
         {
            for (int j=0;j<n;j++)
            {
               cin >> adj[i][j];
               if(adj[i][j]=='J')
               {
                  jqx.push(i);
                  jqy.push(j);
               }
               else if(adj[i][j]=='F')
               {
                  fqx.push(i);
                  fqy.push(j);
               }
            }
         }
         
         while(!fqx.empty())
         {
            int a,b;
            a=fqx.front();
            fqx.pop();
            b=fqy.front();
            fqy.pop();
            bfs(a,b);
         }
         ok=false;
         ans=2147483647;
         while(!jqx.empty())
         {
            int a,b;
            a=jqx.front();
            jqx.pop();
            b=jqy.front();
            jqy.pop();
            bfs2(a,b);
         }
         
         
         if(ok)
         {
            cout << ans << "\n";
         }
         else
         {
            cout << "IMPOSSIBLE\n";
         }
      }
   }
}
