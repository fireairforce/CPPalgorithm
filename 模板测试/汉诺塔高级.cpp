#include<iostream>
#include<cstring>
typedef long long ll;
using namespace std;
const ll maxn=20;
int main()
{
	ll n;
	ll a[maxn];
	memset(a,0,sizeof(a));
	a[1]=2;
	for(ll i=2;i<=18;i++)
	{
		a[i]=3*a[i-1]+2;
	}
	while(cin>>n)
	{
       	cout<<a[n]<<endl;
	}
	return 0;
 } 
