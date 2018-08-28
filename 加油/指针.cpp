#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#define rep(i,s,e) for(int i=(s);i<=(e);i++)
using namespace std;
int n,k;
char a[100][100];
int book[100];
int sum;
void dfs(int x,int y)
{
	if(y==k+1)
	{
		sum++;
		return;
	}
	if(x==n+1)
	{
		return;
	}
	rep(i,1,n)
	{
		if(book[i]==0&&a[x][i]=='#')
		{
			book[i]=1;
			dfs(x+1,y+1);
			book[i]=0;
		}
	}
	dfs(x+1,y);	
}
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	while(cin>>n>>k)
	{
		sum=0;
		if(n==-1&&k==-1) break;
		else
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cin>>a[i][j];
				}
			}
			memset(book,0,sizeof(book));
			dfs(1,1);
			cout<<sum<<endl;
		}
	}
	return 0;
}

