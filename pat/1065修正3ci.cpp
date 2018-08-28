#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn],b[maxn],c[maxn];
struct emm
{
    int x;
    int y;
}q[maxn];
int main()
{
    int n,m,flag=0,zoom=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    scanf("%d",&n);
    map<int,int>emm1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&q[i].x,&q[i].y);
        emm1.insert(make_pair(q[i].x,q[i].y));
        a[q[i].x]++;
        a[q[i].y]++;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
        a[b[i]]+=10;
    }
    for(int i=0;i<=99999;++i)
    {
         if(a[i]==10)
         {
             c[zoom++]=i;
             flag++;
         }
         else if(a[i]>10)
         {

         }
         else continue;
    }
    printf("%d\n",flag);
    if(flag!=0)
    {
      for(int i=0;i<zoom;i++)
      {
        printf("%05d",c[i]);
        if(i!=zoom-1)
        {
            printf(" ");
        }
      }
    }
    return 0;
}

