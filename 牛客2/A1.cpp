#include<bits/stdc++.h>
const int maxn=1e6+7;
using namespace std;
int main()
{
    int n;
    int a[maxn];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=1;
    int zoom=0;
    sort(a+1,a+n+1);
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]%a[i]>k)
            {
               zoom++;
            }
        }
    }
    printf("%d",zoom);
    return 0;
}
