#include<bits/stdc++.h>
const int maxn=1e6+7;
using namespace std;
int a[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=1;
    int zoom=0;
    sort(a+1,a+n+1);
    for(int i=0;i<=n;i++)
    {
        int l=i,r=n-1;
        int mid=0;
        while(l<=r)
        {
          mid=l+(r-l)>>1;
          if(a[mid]/a[i]>k&&a[mid]%a[i]==0)
          {
            zoom++;
            break;
          }
          else if(a[mid/a[i]>k&&a[mid]%a[i]<)
          {

          }
          else if(a[mid]/a[i]<=k)
          {
            l=mid+1;
          }
        }
    }
    printf("%d\n",zoom);
    return 0;
}
