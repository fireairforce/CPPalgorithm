#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6;
bool isPrime[maxn+10];
int main()
{
    memset(isPrime,0,sizeof(isPrime));
    for(int i=2;i<=maxn;i++)
    {
        isPrime[i]=1;
    }
    for(int i=2;i<maxn;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=maxn;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }
    for(int i=2;i<=maxn;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
