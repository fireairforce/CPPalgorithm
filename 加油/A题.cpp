#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cin>>n;
if(n>3)
{
	while(1)
	{
		n=n-3;
		sum++;
		if(n<3) break;
	}
	int zoom=pow(2,sum);
	cout<<2*zoom<<endl;
}
else if(0<n<=3)
{
	cout<<"2"<<endl;
}
	return 0;
 } 
