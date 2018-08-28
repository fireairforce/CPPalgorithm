//λ���� 
#include<iostream>
#define M 100000007
typedef long long ll;
using namespace std;
ll pow_mod(ll a,ll b)//�����a��b���ݡ� 
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
	 //�ұ�10������Ĵ��ҵ���ڶ�λ�� 
	 else 
	 {
	 	 z=m%100;//�����z��һ��2λ���� 
	 	  y=z/10;
	 	  cout<<y<<endl; 
	 }
	 } 
	return 0;
 } 
