#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--)
    {
        printf("%d",a[i]);
        if(i!=1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
