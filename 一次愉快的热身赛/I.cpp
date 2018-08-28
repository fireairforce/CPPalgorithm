#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n;
	string s;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			int a=s[0]-'0';
			int b=s[1]-'0';
			int c=s[2]-'0';
			int d=s[3]-'0';
			//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl; 
			int e=a+b-c-d;
			if(!e)
			{
				cout<<0<<endl;
			}
			else if(e>0)
			{
				int c1=9-c;
				int d1=9-d;
				int a1=a;
				int b1=b;
				if(e>c1&&e>d1&&c+d<a&&c+d<b)
				{
					cout<<2<<endl;
				}
				else cout<<1<<endl;
			}
			else
			{
				int e1=abs(e);
				int a1=9-a;
				int b1=9-a;
				int c1=c;
				int d1=d;
				if(e1>a1&&e1>b1&&a+b<c&&a+b<d)
			     {
			     	cout<<2<<endl;
				 }
				 else 
				 cout<<1<<endl;
			}
		}
	}
	return 0;
}
