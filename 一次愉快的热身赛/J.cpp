#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	int a[10000];
	int count;
	while(cin>>n)
	{
		int tmp=n;k=1;
		memset(a,0,sizeof(a));
		count=0;
		for(int i=2;i<n;i++)
		{
			while(tmp%i==0)
			{
				tmp/=i;
				a[k]=i;
				k++;	
			}
		}
		for(int i=2;i<=k;i++)
		{
			if(a[i-1]!=a[i])
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
