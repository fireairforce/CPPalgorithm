#include<iostream>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		long long m=n/2;
		long long sum=0;
		sum=((n+1)*(n-2))/2;
		cout<<sum+m<<endl;
		sum=0;
	}
	return 0;
}
