#include<bits/stdc++.h>
using namespace std;
string emm;
const int maxn=1e5+7;
typedef long long ll;
ll pow_mod(ll a,ll b)
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
    int n;
    scanf("%d",&n);
    while(n--)
    {
       cin>>emm;
       ll len=emm.size();
       unsigned long long sum=0;
       for(ll i=0;emm[i];i++)
       {
          sum+=pow(10,len-i-1);
          len--;
       }
       int a[maxn]={0},qaq=0;
       do
       {
          a[qaq]=sum
       }while(sum!=0)
    }
    return 0;
}
