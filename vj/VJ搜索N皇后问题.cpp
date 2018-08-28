#include<cstdio>
#include<iostream>
int n;
using namespace std;
void solve_nqueen(int n)
{
	int k;
	first=true;
	if(n%6!=2&&n%6!=3)
	{
		for(int i=2;i<=n;i+=2)
		{
			cout<<i;
		}
		for(int i=1;i<=n;i+=2)
		{
			cout<<i;
		}
	}
	else 
	{
		k=n/2;
		if(k%2==0)
		{
			for(int i=k;i<=n;i+=2)
			{
				cout<<i;
			}
			for(int i=2;i<=k-2;i+=2)
			{
				cout<<i;
			}
			for(int i=k+3;i<=n-1;i+=2)
			{
				
			}
		}
	}
}
int main()
{
	cin>>n;
	solve_nqueen(n);
	return 0;
 } 
