#include<iostream>
int minc=0x3f3f3f3f;
using namespace std; 
int main()
{
	long long n,s;
	cin>>n>>s;
	long long sum=0;
	while(n--)
	{
		long long c,y;
		cin>>c>>y;
		c=min(c,minc+s);
		minc=c;
		sum+=c*y;
	}
	cout<<sum<<endl;
	return 0;
 }

