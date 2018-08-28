#include<iostream>
#define zoom 150
char a[zoom][zoom];
int sum;
int m,n;
using namespace std;
int dfs(int x,int y)
{
	//先考虑一波越界情况。 
	if(a[x][y]!='@'||x<0||x>m||y<0||y>n) 
	{
		return sum;
	}
	else 
	{
		a[x][y]='!';//对开始的这个点进行标记一波。
		//然后往8个方向进行深度搜索。
		dfs(x,y+1);
		dfs(x,y-1);
		dfs(x-1,y);
		dfs(x+1,y);
		dfs(x-1,y-1);
		dfs(x-1,y+1);
		dfs(x+1,y-1);
		dfs(x+1,y+1);
	}
}
int main()
{
	while(cin>>m>>n,m,n)
	{
		sum=0;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				}
			}
			for(int i=1;i<=m;i++)
		   {
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='@')
				{
					dfs(i,j);
					sum++;
				}
			}
	        }
	cout<<sum<<endl;	
	}
	return 0;
 } 
