#include<iostream>
#include<cstring>
#include<string>
#include<algorithm> 
const int maxn=1000000;
using namespace std;
struct cow
{
	int x;
	int y;
}q[maxn];
bool start(const cow &qaq,const cow &wow)//对结构数组根据x进行升序排列。 
{
	return qaq.x<wow.x;
}
/*bool finsh(const cow &qaq,const cow &wow)//对结构数组根据y进行升序排列。 
{
	return qaq.y<wow.y;
}
*/
int main()
{
	int n,T;
	while(cin>>n>>T)
	{
	for(int i=0;i<n;i++)
	{
		cin>>q[i].x>>q[i].y;
	}
	sort(q,q+n,start);
	int cnt=0,temp=0;
	bool flag=0;
    for(int i=0;i<n;)
	{
		int top=temp;
		if(temp+1<q[i].x)
		{
			break;
		}
		while(i<n&&temp+1>=q[i].x)
		{
			top=top>q[i].y?top:q[i].y;
			i++;
		}
		cnt++;
		temp=top;
		if(temp==T)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<cnt<<endl;
	}
	else cout<<"-1"<<endl;
    }
	return 0;
}

