#include<bits/stdc++.h>
using namespace std;
int emm1[1007]={0},emm2[1007]={0};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,b,sum1=0,sum2=0;
        scanf("%d %d",&n,&b);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&emm1[i]);
            sum1+=emm1[i];
        }
        for(int i=0;i<b;i++)
        {
            scanf("%d",&emm2[i]);
        }
        sort(emm2,emm2+b);
        for(int i=0;i<b;i++)
        {
            if(sum1<emm2[i])
            {
                break;
            }
            else
            {
                sum1-=emm2[i];
                sum2++;
            }
        }
        if(sum2>n)
        {
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",sum2);
        }
    }
    return 0;
}
