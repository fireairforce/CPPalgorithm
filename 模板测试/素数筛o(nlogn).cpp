#include<bits/stdc++.h>
using namespace std;
int tot=0;
const int maxn=1e6+7;
int prime[maxn]={0},p[maxn]={0};
int n;
void emm()
{
    for(int i=2;i<=n;i++)
    {
        if(!prime[i])
        {
           p[++tot]=i;
           for(int j=2;j*i<=n;j++)
           {
               prime[j*i]=1;
           }
        }
    }
}
int main()
{
    scanf("%d",&n);
    return 0;
}
