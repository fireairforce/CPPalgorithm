#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[107];
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    sort(a,a+n);
    printf("%d ",a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }
    return 0;
}
