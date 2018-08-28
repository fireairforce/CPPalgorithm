/*#include<iostream>
#include<cstdio>
typedef long long ll;
const int m=100000007;
using namespace std;
long long pow_mod(long long a,long long n,long long m)
{
	if(n==0) return 1%m;
	int temp=pow_mod(a,n>>1,m);
	{
		temp=temp*temp%m;
	}
	if(n&1)
	{
		temp=(long long)temp*a%m;
	}
	return temp;
}
int main()
{
	ll a,n;
	while(cin>>a>>n)
	{	
	cout<<pow_mod(a,n,m)<<endl;
    }
	return 0;
}*/
//快速幂的另一种计算方式， 
#include<iostream>
#define M 100000007
typedef long long ll;
using namespace std;
ll pow_mod(ll a,ll b)
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
	ll a,b;
	while(cin>>a>>b)
	{
			cout<<pow_mod(a,b)<<endl;
	}
	return 0;
 } 
