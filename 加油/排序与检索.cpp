#include<iostream> 
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=10000;
int main()
{
	int n;
	int x,y,z=1;
	int a[maxn],b[maxn];
	while(cin>>n>>x)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=x;j++)
		{
			cin>>b[j];
		}
		sort(a+1,a+n+1);
		cout<<"CASE# "<<z<<":"<<endl;
	    for(int j=1;j<=x;j++)
	    {
	    	for(int i=1;i<=n;i++)
	    	{
	    		if(b[j]==a[i])
	    		{
	    			cout<<b[j]<<" found at "<<i<<endl;
	    			continue;
				}
			    else
			    {
			        cout<<b[j]<<" not found"<<endl;
				}
			}
		}
		z++;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	}
	return 0;
}
