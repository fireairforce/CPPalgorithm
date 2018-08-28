#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
const int maxn=1000+7;
int a[maxn],b[maxn];
int dp[maxn];
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=a[1]*b[1];
        dp[1]=a[n]*b[1];
        for(int i=2;i<=n;i++)
        {
            for(int j=i;j>=0;j--)
            {
               if(!j)
               {
                dp[j]=dp[j]+a[i]*b[i];
               }
               else
               {
                   dp[j]=max(dp[j-1]+b[i]*a[n-j+1],dp[j]+b[i]*a[i-j]);
               }
            }
        }
        int mx=-INF;
        for(int i=0;i<=n;i++)
        {
            mx=max(mx,dp[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
