#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b>>c;
			int m=c/4-a/2;
		     int n=c/4-b;
		    cout<<c/4-(m+n)<<endl;
		}
	}
	return 0;
 } 
