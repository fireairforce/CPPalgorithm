#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn],b[maxn],c[maxn];
int main()
{
    int n,max=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]&&b[i]>max)
        {
            c[cnt++]=b[i];
        }
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++)
    {
        if(i!=0) printf(" ");
        printf("%d",c[i]);
    }
    printf("\n");
    return 0;
}
