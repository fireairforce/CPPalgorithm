#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int a[maxn];
 int n,c;
bool judge(int x)
{
    int cnt=1;
    int tmp=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-tmp>=x)
        {
            cnt++;
            tmp=a[i];
            if(cnt>=c)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    while(scanf("%d%d",&n,&c)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int l=0,r=a[n-1]-a[0],mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(judge(mid))
            {
                l=mid+1;
            }
            else r=mid-1;
        }
        printf("%d\n",l-1);
    }
    return 0;
}
