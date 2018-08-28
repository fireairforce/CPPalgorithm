#include<iostream>
#include<cstring>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}
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
		int e=a+b-c-d;
		if(!e)
		{
			cout<<0<<endl;
		}
		else if(e>0)
		{
			if(max(c,d)+9>=(a+b)||min(a,b)+0<=(c+d))
			{
				cout<<1<<endl;
			}
            else cout<<2<<endl;
		}
	    else 
		{
			if(max(a,b)+9>=(c+d)||min(c,d)+0<=(a+b))
			{
				cout<<1<<endl;
			}
		    else cout<<2<<endl;
		}
		}
	}
	return 0;
 } 
