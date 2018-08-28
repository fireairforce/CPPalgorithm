#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
struct emm
{
   int y;
}q[maxn];
bool prime(int x)
{
    if(x==2)
    {
        return true;
    }
    else
    {
       for(int i=2;i<=sqrt(x);i++)
       {
         if(x%i==0)
         {
           return false;
         }
       }
     return true;
    }
}
int b[maxn],c[maxn],d[maxn];
int main()
{
    int n,m;
    scanf("%d",&n);
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&q[i].y);
       b[q[i].y]=i;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
         scanf("%d",&c[i]);
    }
    for(int i=1;i<=m;i++)
    {
        printf("%04d: ",c[i]);
       if(b[c[i]]==0)
       {
            printf("Are you kidding?\n");
       }
       else
       {
        if(d[c[i]]==0)
        {
          if(b[c[i]]==1)
          {
            printf("Mystery Award\n");
            d[c[i]]++;
          }
          else if(prime(b[c[i]]))
          {
            printf("Minion\n");
            d[c[i]]++;
          }
          else if(prime(b[c[i]])==0)
          {
            printf("Chocolate\n");
            d[c[i]]++;
          }
        }
         else
         {
            printf("Checked\n");
         }
       }
    }
    return 0;
}
