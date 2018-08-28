#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=4000000;
int a[maxn],b[maxn];
int main()
{
   int n,k;
   while(cin>>n>>k)
   {
   	for(int i=0;i<400000;i++)
   {
   	  b[i]=0;
   }
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   		{
   			for(int j=a[i]-k;j<=a[i]+k;j++)
   			{
   				int ok=j;
				   b[ok+10000]++;
			   }
		   }
	   }
	   int flag=b[0],zoom=0;
	  for(int i=0;i<=400000;i++)
	  {
	  	if(b[i+1]>flag)
	  	{
	  		flag=b[i+1];
	  		zoom=i+1;
		  }
	   }
	  cout<<zoom-10000<<" "<<flag<<endl;
	  //memset()
   }
   return 0;
 } 
