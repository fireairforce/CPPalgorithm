#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int a[1005],dp[1005];
int main()
{
	int n;
	while(cin>>n,n)
	{
		memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int m;
	cin>>m;
	if(m<5)
	{
		cout<<m<<endl;
		continue;
	}
	
	m=m-5;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<n;i++)
	{
	  for(int j=m;j>=a[i];j--)
	  {
	  	dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		  }	
	}
    cout<<m+5-dp[m]-a[n]<<endl;
}
	return 0;
 } 
