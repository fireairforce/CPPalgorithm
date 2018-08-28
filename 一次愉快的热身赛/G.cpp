#include<iostream>
using namespace std;
int main()
{
	int n;
	long long x;
	int ans=1;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			for(int j=1;j<=x;j++)
			{
				ans=ans*2;
			}
			cout<<ans-1<<endl;
			ans=1;
		}
	}
	return 0;
}
