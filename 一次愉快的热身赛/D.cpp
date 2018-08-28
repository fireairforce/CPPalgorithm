#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
const int maxn=30040;
using namespace std;
int main()
{
	int a[maxn],b[maxn],c[maxn];
	int  n,k;
	int  m;
	int force;
	while(cin>>n>>k)
	{	
	    force=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		for(int j=b[i]-k;j<=b[i]+k;j++)
		{
            a[force]=j;
            force++;
		}
	   }
	   sort(a,a+force); 
	   //找数组里面出现最多的数并输出其数字。 
	   int flag=a[0];
	   int time=0;
	   int maxNum=0;
	   int maxTime=0;
	   for(int i=0;i<force;i++)
	   {
	   	if(a[i]==flag)
	   	{
	   		time++;
		   }
		else if(a[i]!=flag)
		{
			if(time>maxTime)
			{
				maxTime=time;
				maxNum=a[i-1];
			}
			flag=a[i];
			time=1;
		}
		} 
		cout<<maxNum<<" "<<maxTime<<endl;
    }
	return 0;
}
