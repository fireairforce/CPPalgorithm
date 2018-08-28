#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int M;
	//int p[10];
	int a,b,c,d,e;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>M;
		a=M/1000;
		b=(M-1000*a)/100;
		c=(M-1000*a-100*b)/10;
		d=(M-1000*a-100*b-10*c);
		e=abs((a+b)-(c+d));
		if(a>c&&a>d&&b>c&&b>d||a<c&&a<d&&b<c&&b<d)
		{
				cout<<2<<endl;
		}
		else 
		{
			cout<<"1"<<endl;
		}
		//cout<<a<<b<<c<<d;
		/*if(e>=10)
		{
			cout<<2<<endl;
		}
		else if(e==9)
		{
			if(a>c&&a>d&&b>c&&b>d||a<c&&a<d&&b<c&&b<d)
			{
				cout<<2<<endl;
			}
			else 
			{
				cout<<1<<endl;
			}
	   }
	   else if(e==0)
	   {
	   	cout<<0<<endl;
	   }
	   	else 
		{
			if(a==0&&b==0&&c!=0&&d!=0||d==0&&c==0&&a!=0&&b!=0)
			{
				cout<<2<<endl;
			}
			else 
			cout<<1<<endl;	
		}*/	
	}
	return 0;
 } 
