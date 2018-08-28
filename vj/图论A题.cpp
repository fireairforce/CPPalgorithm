#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cmath>
const int maxn=500;
int n;
struct frog
{
    double x;
    double y;
}q[maxn];
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double m=0x3f3f3f3f*1.0;
    double minx;
    int k=1;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
           for(int i=0;i<n;i++)
           {
               cin>>q[i].x>>q[i].y;
           }
           for(int i=0;i<n;i++)
           {
               for(int j=i+1;j<n;++j)
               {
                  minx=min(sqrt(abs(q[i].x-q[j].x)*abs(q[i].x-q[j].x)+abs(q[i].y-q[j].y)*abs(q[i].y-q[j].y)),m);
                  m=minx;
               }
           }
           cout<<"Scenario #"<<k++<<endl;
           cout<<"Frog Distance = ";
           cout<<fixed<<setprecision(3)<<m<<endl;
           m=0x3f3f3f3f;
           cout<<endl;
        }

    }
    return 0;
}
/*#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iomanip>
#define INF 0x3f3f3f3f*1.0
using namespace std;
struct node{
    double x, y;
}nd[205];
double g[205][205];
double d[205];
int vis[205];
int n;
void Dijkstra(){
   memset(vis, 0, sizeof(vis));
   d[1]=0.0;
   int root=1;
   vis[1]=1;
   for(int i=2; i<=n; ++i)
      d[i]=INF;
   for(int j=1; j<n; ++j){
       int p;
       double minL=INF;
       for(int i=1; i<=n; ++i){
          double dist;
          if(!vis[i] && d[i]> (dist=max(d[root], g[root][i])))
              d[i]=dist;
          if(!vis[i] && minL>d[i]){
              minL=d[i];
              p=i;
          }
       }
       if(minL==INF) return;
       root=p;
       vis[root]=1;
   }
}

int main(){
   int cnt=0;
   while(cin>>n && n){
       for(int i=1; i<=n; ++i)
          for(int j=1; j<=n; ++j)
             g[i][j]=INF;
       for(int i=1; i<=n; ++i){
          double u, v;
          cin>>nd[i].x>>nd[i].y;
          for(int j=1; j<i; ++j){
             u=nd[i].x-nd[j].x;
             v=nd[i].y-nd[j].y;
             g[i][j]=g[j][i]=sqrt(u*u + v*v);
          }
       }
       Dijkstra();
       cout<<"Scenario #"<<++cnt<<endl<<"Frog Distance = ";
       cout<<fixed<<setprecision(3)<<d[2]<<endl;
       cout<<endl;
   }
   return 0;
}*/
