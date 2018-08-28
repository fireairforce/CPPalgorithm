#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
char s[maxn];
int dp[maxn][maxn];
int main()
{
     scanf("%s",s+1);
     int n=strlen(s+1);
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(s[i]==s[n+1-j])
             {
                 dp[i][j]=dp[i-1][j-1]+1;
             }
             else
             {
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
         }
     }
     printf("%d\n",n-dp[n][n]);
    return 0;
}
