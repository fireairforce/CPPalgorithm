#include<bits/stdc++.h>
using namespace std;
int c[10007];
int main()
{
    int n,m,k;
    int a[10007],b[10007];
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&b[i]);
        }
        int zoom=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
                c[zoom++]=a[i]*b[j];
           }
       }
    nth_element(c,c+k-1,c+zoom);
    printf("%d\n",c[k-1]);
    }
    return 0;
}

