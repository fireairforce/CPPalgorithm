//采用2分的思想。
#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    ll zoom=0;
    while(n)
    {
        zoom+=n/5;
        n/=5;
    }
    return zoom;
}
int main()
{
   int t;
   cin>>t;
   int k=0;
   while(t--)
   {
       ll m;
       cin>>m;
       ll ans=0;
       unsigned long long left=1,right=1000000000000;
       while(right>=left)
       {
           ll mid=(left+right)/2;
           if(sum(mid)==m)
           {
               ans=mid;
               right=mid-1;
           }
           else if(sum(mid)>m)
           {
               right=mid-1;
           }
           else left=mid+1;
       }
       cout<<"Case "<<++k<<": ";
       if(ans)
       {
           cout<<ans<<endl;
       }
       else  cout<<"impossible"<<endl;
   }
    return 0;
}
