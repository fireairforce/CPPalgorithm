#include<iostream>
using namespace std;
int main()
{
	int a[1024],b[1024],c[3000],i,j,n;
	int top;
	while(cin>>n,n)
	{
		while(cin>>b[0],b[0])
		{
			a[0]=1;
			for(int i=1;i<n;i++)
			{
				a[i]=i+1;
				cin>>b[i];
			}
			i=top=j=0;
			while(i<n)
			{
				c[top]=a[i];
				while(c[top]==b[j]&&j<n)
				{
					top--;
					j++;
				}
				i++;
				top++;
			}
			if(j==n)
			{
				cout<<"Yes"<<endl;
			}
			else cout<<"No"<<endl;
		}
		cout<<endl;
	}
	return 0;
 } 
