#include<bits/stdc++.h>
using namespace std;
int countOne(int n,int x)
{
    int cnt=0;
    for(;n>0;n/=10)
    {
        if(n%10==x)
        {
            cnt++;
        }
    }
    return cnt;
}
int countO(int n,int x)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=countOne(i,x);
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=9;i++)
    {
        cout<<countO(n,i)<<endl;
    }
    return 0;
}
