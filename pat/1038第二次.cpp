#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn];
int b[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    int y;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&y);
        a[y]++;
    }
    int k;
    scanf("%d",&k);
    int x;
    for(int i=1;i<=k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=k;i++)
    {
        printf("%d",a[b[i]]);
        if(i!=k) printf(" ");
    }
    printf("\n");
    return 0;
}
