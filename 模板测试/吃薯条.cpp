#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	while(cin>>n)
	{
		int t=0;
		while(n>0)
		{
		  if(n%2!=0)
		   {
			n=n-(n/2+1);
		   }
		   else 
		   {
		    n=n-n/2;
		   }
		    t++;
		}
		cout<<t<<endl;
	}
	return 0;
 } 
