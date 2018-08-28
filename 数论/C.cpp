#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
   ll x1,x2;
   ll y1,y2;
   int k=0;
   int t;
   cin>>t;
   while(t--)
   {
   cin>>x1>>y1>>x2>>y2;
   ll ans=gcd(abs(x1-x2),abs(y1-y2))+1;
   cout<<"Case "<<++k<<": "<<ans<<endl;
   }

    return 0;
}
