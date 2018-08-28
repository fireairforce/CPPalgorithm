#include<iostream>
#include<cstring>
const int maxn=10007;
using namespace std;
char sz1[maxn];
char sz2[maxn];
int dp[maxn][maxn];
int main()
{
        cin>>sz1>>sz2;
        int len1=strlen(sz1);
        int len2=strlen(sz2);
        int nTmp;
        int i,j;
        for(i=0;i<=len1;i++)
        {
            dp[i][0]=0;
        }
        for(j=0;j<=len2;j++)
        {
            dp[0][j]=0;
        }
        //先把边界条件搞好。
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                if(sz1[i-1]==sz2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        cout<<dp[len1][len2]<<endl;
    return 0;
}
