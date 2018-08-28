#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn];
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n,greater<int>());
    for(int i=1;i<=n;i++)
    {
        if(a[i]>i)
        {
           sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
