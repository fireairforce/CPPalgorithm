#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int count=0;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		m=s.size();
		for(int i=1;i<=m;i++)
		{
			if(s[i]=='h'&&s[i+1]=='T'&&s[i+2]=='h')
			{
				count++;
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
 } 
