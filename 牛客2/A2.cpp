#include<bits/stdc++.h>
const int maxn=1e6+7;
using namespace std;
int a[maxn];
int main()
{
    int n;
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
               break;
            }
        }
    }
    printf("%d\n",zoom);
    return 0;
}
