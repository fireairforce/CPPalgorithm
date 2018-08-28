#include<iostream>
using namespace std;
typedef long long ll;
ll pow_mod(ll x,ll y)
{
	ll a;
	if(y==0) return 1;
	ll temp=pow_mod(x,y>>1);
	    temp=temp*temp;
	if(y&1) temp=temp*x;
	return temp;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<pow_mod(a,b);
	return 0;
 } 
