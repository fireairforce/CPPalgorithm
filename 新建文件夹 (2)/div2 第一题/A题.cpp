//位运算 
#include<iostream>
#define M 100000007
typedef long long ll;
using namespace std;
ll pow_mod(ll a,ll b)//计算出a的b次幂。 
{
	ll ans=1,base=a;
	while(b!=0)
	{
		if(b&1!=0)
		{
			ans=(ans*base)%M;
		}
		base=base*base%M;
		b>>=1;
	}
	return ans%M;
}
int main()
{
	ll n,x,z,y;
	cin>>n;
    ll zoom=9;
	for(ll i=1;i<=n;i++)
	{
		cin>>x;
		ll m=pow_mod(zoom,x);
	if(m<10)
	 {
	 	cout<<0<<endl;
	 }
	 //找比10大的数的从右到左第二位。 
	 else 
	 {
	 	 z=m%100;//这里的z是一个2位数。 
	 	  y=z/10;
	 	  cout<<y<<endl; 
	 }
	 } 
	return 0;
 } 
