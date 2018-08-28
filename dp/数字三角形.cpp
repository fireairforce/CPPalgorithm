 //用dp数组来存取每个位置的点到底边的最大值。
//状态转移方程式是dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];

#include<bits/stdc++.h>
const int maxn=1e3+7;
int dp[maxn][maxn];
int a[maxn][maxn]
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        dp[n][i]=a[n][i];
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
        }
    }
    printf("%d\n",dp[1][1]);
    return 0;
}
