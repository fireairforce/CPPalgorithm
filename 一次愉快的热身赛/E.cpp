#include<iostream>
using namespace std;
int count(int x)
{
	int cnt=0,k;
	for(int i=1;k=x/i;i*=10)
	{
		cnt+=(k/10)*i;
		int cur=k%10;
		if(cur>1)
		{
			cnt+=i;
		 }
		 else if(cur==1)
		 {
		 	cnt+=x-k*i+1;
		  } 
	}
	return cnt; 
}
int main()
{
	int n,x;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			cout<<count(x)<<endl;
		}
	}
	return 0;
 } 
