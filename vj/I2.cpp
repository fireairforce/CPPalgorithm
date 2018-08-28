#include<iostream>
using namespace std;
int main()
{
	int n,x;
	int max=0;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(x>max)
			{
				max=x;
			}
		}
		if(max==0)
		{
			cout<<1<<endl;
		}
		else cout<<max+1<<endl;
	}
	return 0;
 } 
