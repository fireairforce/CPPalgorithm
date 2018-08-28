#include <stdio.h>

int main()
{
    int n,m;
    int hig[25];
    int dp[25];         //[] 拦截了该导弹后，最多能拦截的数量（包含当前导弹）
    int i,j;
    int max;
        max=0;
        for( i=0;i<7;i++)
        {
            scanf("%d",&hig[i]);
            dp[i]=1;

        }
        //核心
        for( i=5;i>=0;i--)
            for(j=i+1;j<7;j++)
            {
                if(hig[i]>hig[j]&&dp[i]<dp[j]+1)      //关键
                    dp[i]=dp[j]+1;
            }

        for(i=0;i<7;i++)
        {
            if(dp[i]>max)
                max=dp[i];
        }

        printf("%d\n",max);
        return 0;
    }
