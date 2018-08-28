#include<iostream>
using namespace std;
int main()
{
	int n;
	int j;
	int zoom=0;
	int baba=0;
	int mama=0;
	int haha=0;
	int i=0;
	int k=0;
	while(cin>>n,n)
	{
	    int sum=0;
		for(i=1;i<=1000000;i++)
	    {
	    	sum+=i;
	    	if(sum==n||sum>n)
	    	{
				break;
			}
			else continue;
		}
		j=i;
	    mama=sum-n;
	    //cout<<mama<<endl;
	    //cout<<j<<endl;
		for(int k=1;k<=(j-1);k++)
		{
			 baba+=k*k;
		}
		//cout<<baba<<endl;
		haha=(j-mama)*j;
		int fuck=baba+haha;
		cout<<fuck<<endl;
		baba=0;
		fuck=0;
		haha=0;
}
       return 0;
}

