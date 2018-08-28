//Funv拿首尾数字相加。win  “what a sad story” 
//Fubery选择剩下的任意三个数字。win “It will be a...” 
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<iomanip>
int a[10];
using namespace std;
int main()
{
	int n;
	int fuv,fub;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fuv=0;fub=0;
		memset(a,0,sizeof(a));
		for(int j=1;j<=6;j++)
		{
			cin>>a[j];
		}
		sort(a+1,a+7);
		fuv=a[6]+a[5];
		fub=a[4]+a[3]+a[2];
		cout<<fuv<<" "<<fub<<endl;
		if(fuv>fub)
		{
			cout<<"What a sad story!"<<endl;
			continue;
		}
		else if(fuv==fub)
		{
			cout<<"HeHe!"<<endl;
			continue;
		}
		else if(fuv<fub)
		{
		cout<<"It will be a sad story!"<<endl;
		continue;
	    }
	}
	return 0;
}
