#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod_pow(ll a,ll b)
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b%2!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{
    cout<<mod_pow(5,4)<<endl;
    return 0;
}
