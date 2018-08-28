#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
int a[maxn]={0},b[maxn]={0};
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int t=0,minx=0x3f3f3f3f;
     for(int i=0;a[i];i++)
     {
         for(int j=0;b[j];j++)
         {
            t=abs(b[j]-a[i]);
            if(t<minx)
            {
                minx=t;
            }
         }
     }
     printf("%d\n",minx);
    return 0;
}
