#include<bits/stdc++.h>
using namespace std;
void emm()
{
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            p[++tot]=i;
        }
        for(int j=1;j<=tot&&i*p[j]<=n;j++)
        {
            prime[i*p[j]]=1;
            if(i%p[j]==0)
            {
                break;
            }
        }
    }
}
int main()
{

    return 0;
}
