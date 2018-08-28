#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int a[107],b[107],c[107][107],sum[107];
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&c[i][j]);
            if(c[i][j]==b[j])
            {
                sum[i]+=a[j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",sum[i]);
    }
    return 0;
}
