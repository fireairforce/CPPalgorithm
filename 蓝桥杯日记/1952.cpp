#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int n;
    set<ll>emm;
    ll m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       cin>>m;
       emm.insert(m);
    }
    ll a=0,b=0,ka,kb;
    set<ll>::iterator it1=emm.begin(),it2=it1++;
    for(;it1!=emm.end();it1++,it2++)
    {
       ll k=gcd(*it1,*it2);
       ka=*it1/k;
       kb=*it2/k;
       if(a==0)
       {
           a=ka;
           b=kb;
       }
       else
       {
           a=gcd(a,ka);
           b=gcd(b,kb);
       }
    }
   cout<<a<<"/"<<b<<endl;
    return 0;
}
