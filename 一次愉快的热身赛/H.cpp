#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string s;
	string s1="hTh";
	int n;
	int count;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>s;
           count=0;
			for(int j=0;j<s.size();j++)
			{
				if(s[j]==s1[0]&&s[j+1]==s1[1]&&s[j+2]==s1[2])
				{
					count++;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
