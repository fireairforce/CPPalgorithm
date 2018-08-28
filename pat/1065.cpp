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
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&q[i].x,&q[i].y);
        a[q[i].x]+=q[i].y;
        a[q[i].y]+=q[i].x;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
        a[b[i]]+=100007;
    }
    for(int i=1;i<=m;i++)
    {
        if((a[b[i]]==100007)&&((a[a[b[i]]-100007]-b[i])!=100007))
        {
            c[zoom++]=b[i];
            flag++;
        }
        else if(a[b[i]]>100007)
        {
            if((a[a[b[i]]-100007]-b[i])==100007)
            {
                continue;
            }
            else
            {
                c[zoom++]=b[i];
                flag++;
            }
        }
        else continue;
    }
    printf("%d\n",flag);
    sort(c,c+zoom);
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

