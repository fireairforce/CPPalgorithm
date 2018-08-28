#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
struct emm
{
    int x;
    char ganghao;
    int y;
    int z;
}q[maxn];
int a[maxn];
int main()
{
    int n,minx=-1,start=0;
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       cin>>q[i].x>>q[i].ganghao>>q[i].y>>q[i].z;
       a[q[i].x]+=q[i].z;
    }
    for(int i=1;i<1007;i++)
    {
       if(a[i]!=0)
       {
           if(a[i]>minx)
           {
               minx=a[i];
               start=i;
           }
       }
    }
    printf("%d %d\n",start,minx);
    return 0;
}
