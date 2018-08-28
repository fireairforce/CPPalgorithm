#include<iostream>
#include<cstring>
using namespace std;
int a[100086],dp[100086];
int sum;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	memset(dp,0,sizeof(dp));
	int n;
	while(cin>>n)
	{
   sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	 } 
	 dp[0]=1;
	 for(int i=1;i<=n;i++)
	 {
	 	 dp[i]=1;
	 	 for(int j=1;j<=i;j++)
	 	 {
	 	 	if(a[i]>a[j])
	 	 	dp[i]=max(dp[i],dp[j]+1);
		  }
	 }
	 for(int k=1;k<=n;k++)
	 {
	 	sum=max(sum,dp[k]);
	 }
	 cout<<sum<<endl;
}
	return 0;
 } 
