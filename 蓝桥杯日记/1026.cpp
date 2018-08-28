#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a[1007]={0},b[1007]={0};
ll f(ll x)
{
    if(x==0)
    {
        return 1;
    }
    else return x*f(x-1);
}
ll emm(ll y)
{
    ll zoom=0;
    ll emmm=f(y);
     while(emmm>8)
     {
        emmm=emmm/8;
        zoom++;
     }
     if(emmm==0)
     {
         zoom--;
     }
     return zoom+1;
}
int main()
{
   ll t;
   scanf("%d",&t);
   ll x;
   for(ll i=1;i<=t;i++)
   {
       cin>>x;
      cout<<emm(x)<<endl;
   }
    return 0;
}
