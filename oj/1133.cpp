#include<bits/stdc++.h>
using namespace std;
const int maxn=7;
int a[maxn],book[maxn];
int main()
{
    for(int i=1;i<=4;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+5);
    for(int i=4;i>0;i--)
    {
        for(int j=1;j<=4;j++)
        {
            if(j!=i)
            {
                for(int k=1;k<=4;k++)
                {
                    if(k!=i&&k!=j)
                    {
                        for(int t=1;t<=4;t++)
                        {
                            if(t!=i&&t!=j&&t!=k)
                            {
                                printf("%d %d %d\n",a[j],a[k],a[t]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
