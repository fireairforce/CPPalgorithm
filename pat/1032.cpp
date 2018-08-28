#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn];
int main()
{
    int n,x,y,minx=-1,start=0;
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       scanf("%d%d",&x,&y);
       a[x]+=y;
    }
    for(int i=1;i<100000;i++)
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
