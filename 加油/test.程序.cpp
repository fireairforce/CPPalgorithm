#include<iostream>
#include<algorithm>
const int maxn=2050;
using namespace std;
int main()
{
	int n;
	int i;
	int a[maxn];
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		 } 
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}
