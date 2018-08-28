#include<bits/stdc++.h>
using namespace std;
int emm1[1007]={0},emm2[1007]={0};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,b;
        scanf("%d %d",&n,&b);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&emm1[i]);
        }
        for(int i=0;i<b;i++)
        {
            scanf("%d",&emm2[i]);
        }
        sort(emm1,emm1+n);
        sort(emm2,emm2+b);
        int sum=0;
        int qaq=b-1;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=qaq;j>=0;j--)
            {
                if(emm1[i]>=emm2[j])
                {
                   sum++;
                   qaq=j-1;
                   break;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
