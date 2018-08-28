#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll exgcd(ll a,ll b,ll& x,ll& y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll r=exgcd(b,a%b,y,x)
    y-=a/b*x;
    return r;
}
int main()
{
    //gcd(a,b)=gcd(b,a%b);
    return 0;
}
