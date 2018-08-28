#include<bits/stdc++.h>
const int maxn=10000;
int sushu[maxn];//为1就是素数否则GG。
using namespace std;
int main()
{
    int n;
    cin>>n;
    memset(sushu,0,sizeof(sushu));
    for(int i=2;i<=n;i++)
    {
        sushu[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        if(sushu[i])
        {
           for(int j=i+i;j<=n;j+=i)
           {
               sushu[j]=0;
           }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(sushu[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
