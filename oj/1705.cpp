#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int flag=0;
        int sum1=0,sum2=0;
        for(int i=1;i<=100;i++)
        {
            for(int j=i+1;j<100;j++)
            {
                if(i*j==n*(i+j)&&(j-i)<=8)
                {
                   flag=1;
                   sum1=i;
                   sum2=j;
                   break;
                }
            }
            if(flag) break;
        }
        if(flag)
        {
            printf("%d %d\n",sum1,sum2);
        }
        else printf("-1\n");
    }
    return 0;
}
