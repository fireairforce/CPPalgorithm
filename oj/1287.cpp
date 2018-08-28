#include<bits/stdc++.h>
using namespace std;
const int maxn=30007;
int main()
{
    int x,a[maxn],dp[maxn],zoom1=0,zoom2=0;
    while(scanf("%d",&x)!=EOF)
    {
        a[++zoom1]=x;
        dp[++zoom2]=1;
    }
    for(int i=2;i<=zoom1;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]<=a[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    cout<<*max_element(dp+1,dp+zoom1+1)<<endl;
    return 0;
}

