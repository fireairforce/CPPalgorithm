/*#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			for(int i=0;i<a;i++)
			{
				cout<<"X";
				for(int j=i;j<a-2;j++)
				{
					cout<<" ";
				}
			}
		}
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long m=n*n*n;
	int a=n*n-n+1;
	cout<<n<<'*'<<n<<'*'<<n<<"="<<m<<"=";
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
