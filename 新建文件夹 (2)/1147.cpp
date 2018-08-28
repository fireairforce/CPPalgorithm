#include<iostream>
using namespace std;
int mian()
{
	int n;
	cin>>n;
	long long m=n*n*n;
	int a=n*n-n+1;
	cout<<"13*13*13="<<"m";
	for(int i=1;i<=n;i++)
	{
	     cout<<a;
		 a+=2;
		 if(i!=n)
		 {
		 	cout<<'+'; 
		 }
	}
	return 0;
}
