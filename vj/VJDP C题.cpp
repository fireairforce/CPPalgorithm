#include<iostream>
using namespace std;
int n;
int a[1000010];
int main()
{
	while(cin>>n)
	{
		int num=0;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(num==0)
			{
				++num;
				ans=a[i];
			}
			else 
			{
				if(ans!=a[i])
				{
					num--;
				}
				else 
				num++;
			}
		}
		cout<<ans<<endl;	 
	}
	return 0;
}
