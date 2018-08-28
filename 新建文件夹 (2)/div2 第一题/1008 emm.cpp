#include<iostream>
#include<cstring>
#include<algorithm>
typedef long long ll;
const ll maxn=1000000050;
using namespace std;
ll a[maxn],b[maxn],c[maxn][maxn];
int main()
{
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=n;j++)
		{
			c[i][j]=a[i]+b[j];
		}
	}
	for(ll i=1;i<=n;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
