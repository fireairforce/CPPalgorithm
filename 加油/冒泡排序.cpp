#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"1"<<endl;
	}
	else if(n==0)
	{
		exit(0);
	}
	else
	{
		int s=n/2;
		int S=s*2;
		cout<<S<<endl;
	}
	
	return 0;
}
//2 3Êä³ö 2 £¬4 5Êä³ö4£¬6£¬7Êä³ö6 

