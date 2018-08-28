//1005整体思路出现了问题23333.
#include<bits/stdc++.h>
const int maxn=1e5;
int a[maxn],b[maxn],c[maxn],d[maxn];
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=maxn;i++)
    {
        a[i]=0;
    }
    int hah=0;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        c[++hah]=b[i];
        a[b[i]]++;
        while(b[i]!=1)
        {
            if(b[i]%2==0)
            {
                b[i]=b[i]/2;
                a[b[i]]+=4;
            }
            else
            {
                b[i]=(3*b[i]+1)/2;
                a[b[i]]+=4;
            }
        }
    }
    sort(c+1,c+n+1);
    int minx=0x3f3f3f3f;
  for(int i=c[n];i>=c[1];i--)
  {
      if(a[i]==1)
      {
          if(a[i]<minx)
          {
              minx=i;
          }
      }
  }
  for(int i=c[n];i>=c[1];i--)
  {
      if(a[i]==1)
      {
          cout<<i;
          if(i!=minx)
          {
              cout<<" ";
          }
          else cout<<endl;
      }
  }
    return 0;
}
