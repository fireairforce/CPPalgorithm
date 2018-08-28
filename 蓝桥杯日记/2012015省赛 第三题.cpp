#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll pow_mod(ll a,ll b)
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
bool cj(ll x,ll y)
{
    ll emm1[100]={0};
    ll emm2[100]={0};
    ll zoom=0;
    while(x!=0)
    {
        emm1[zoom]=x%10;
        x/=10;
        if(emm2[emm1[zoom]])
        {
            return false;
        }
        emm2[emm1[zoom]]++;
        zoom++;
    }
    while(y!=0)
    {
        emm1[zoom]=y%10;
        y/=10;
        if(emm2[emm1[zoom]])
        {
            return false;
        }
        emm2[emm1[zoom]]++;
        zoom++;
    }
    return true;
}
int main()
{
    ll m;
    ll n;
    for(ll i=1;i<1000;i++)
    {
        m=pow_mod(i,2);
        n=pow_mod(i,3);
       // cout<<m<<" "<<n<<endl;
        if(cj(m,n))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
