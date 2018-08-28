#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	int t,i;
	string N;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>N;
		a=int(N[0]-'0');
		b=int(N[1]-'0');
		c=int(N[2]-'0');
		d=int(N[3]-'0');
		int m=a+b;
		int n=c+d;
		if(m==n)
		{
			cout<<0<<endl;
		}
		if(m<n)
		{
			if((max(a,b)+9)>=n)
			{
				cout<<'1'<<endl;
			}
			else cout<<'2'<<endl;
		}
		if(n<m)
		{
			if((max(c,d)+9)>=m)
			{
				cout<<'1'<<endl;
			}	
			else cout<<'2'<<endl;
		}
	}
	return 0;
}
