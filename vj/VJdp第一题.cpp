#include<iostream>
#include<cstring>
#define max(a,b) a>b?a:b
using namespace std;
int a[1000000],dp[10500000];
int c=1;
int main()
{
	int n;
	while(cin>>n)
	{
	   memset(dp,0,sizeof(dp));
	   memset(a,0,sizeof(a));
	   for(int i=1;i<=n;i++)
	   {
	   	cin>>a[i];
	   	dp[i]=1;
		   }	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				if(a[i]>a[j])
				{
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
		   }
	for(int i=1;i<=n;i++)
	{
		c=max(c,dp[i]);
	}
	cout<<c<<endl;
	c=1;	      	   
	}
	return 0;
}
