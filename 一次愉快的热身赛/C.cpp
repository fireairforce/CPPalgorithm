#include<bits/stdc++.h>
const int maxn=5000000;
int a[maxn],b[maxn],c[maxn];
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i]; 
		}
		for(int j=0;j<n;j++)
		{
			cin>>b[j]; 
		}
		for(int m=0;m<4000000;m++)
		{
			c[m]=0;
		}
		int zoom;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				zoom=a[i]^b[j];
				c[zoom]++;
			}
		}
	 int count=0;
	  for(int i=0;i<n;i++)
	  {
	  	if(c[a[i]]!=0)
	  	{
	  		count+=c[a[i]];
		}
	  }
	  for(int i=0;i<n;i++)
	  {
	  	if(c[b[i]]!=0)
	  	{
	  		count+=c[a[i]];
		}
	  }
		if(count%2==0)
		{
			cout<<"cYz"<<endl;
		}
		else cout<<"hTh"<<endl;
	   memset(c,0,sizeof(c));
	}
	return 0;
 } 
