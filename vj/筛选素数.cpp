#include<iostream>
#define maxn 100000
bool vaild[maxn];
using namespace std;
int main()
{
	int n,tot,ans[maxn];
	tot=0;
	int i,j;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		vaild[i]=true;
	}
	for(int i=2;i<=n;i++)
	{
		if(vaild[i])
		{
			if(n/i<i)
			{
				break;
			}
			for(int j=i*i;j<=n;j+=i)
			{
				vaild[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(vaild[i]) 
		{
			tot++;
			ans[tot]=i;
		}
	}
	cout<<tot<<endl;
	return 0;
 } 
