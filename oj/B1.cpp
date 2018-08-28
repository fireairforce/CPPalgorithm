#include<bits/stdc++.h>
using namespace std;
const int maxn=1e7;
int book[maxn];
int main()
{
    int t,n,l,r,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&l,&r);
        sum=0;
        memset(book,0,sizeof(book));
        for(int i=2;i<=r;i++)
        {
            for(int j=i;j<=r;j+=i)
            {
                if(book[j]==0)
                {
                    book[j]=1;
                }
                else book[j]=0;
            }
        }
        for(int i=l;i<=r;i++)
        {
            if(book[i]) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
