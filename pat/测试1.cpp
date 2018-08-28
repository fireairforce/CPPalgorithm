#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn];
int b[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int x;
    for(int i=0;i<=1000;i++)
    {
        b[i]=0;
    }
    for(int i=1;i<=k;i++)
    {
        scanf("%d",&x);
        for(int j=1;j<=n;j++)
        {
            if(a[j]==x)
            {
                b[i]++;
            }
        }
    }
    for(int i=1;i<=k;i++)
    {
        printf("%d",b[i]);
        if(i!=k)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
