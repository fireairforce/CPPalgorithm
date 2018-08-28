#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	ll a[10],b[10];
    ll sum=0,count=0;
	  while(scanf("%lld",&n)!=EOF)
	  {
	  	//ios::sync_with_stdio(false);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<6;j++)
			{
				cin>>a[j];
			}
			for(int k=0;k<6;k++)
		    {
		    	cin>>b[k];
			 } 
			for(int m=0;m<6;m++)
			{
				if(a[m]>b[m])
				{
					count++;
				}
				else if(a[m]<b[m])
				{
					count--;
				}
				else continue;
			}
			if(count>0)
			{
				cout<<"Alice"<<endl;
			}
			else if(count<0)
			{
				cout<<"Bob"<<endl;
			}
			else cout<<"Tie"<<endl;
			cin.tie(0);
			count=0;
	     }
	  }
	return 0;
 } 
