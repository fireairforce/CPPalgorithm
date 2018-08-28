#include<iostream>
using namespace std;
int c[51][51],book[51][51];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int a,b;
int emm=999999999;
int startx,starty,p,q;
void dfs(int x,int y,int step)
{
	int tx,ty;
	if(x==p&&y==q)
	{
		if(step<emm)
		{
			emm=step;
		}
		return;//递归一定要有边界条件的判断 
	}
	for(int i=0;i<=3;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<1||tx>a||ty<1||ty>b)
		{
			continue;
		}
		if(book[tx][ty]==0&&c[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;//回收条件一定要有。 
		}
	 } 
}
int main()
{
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			cin>>c[i][j];
		}
	}
	cin>>startx>>starty>>p>>q;
	book[startx][starty]=1;//这里就和全排列有点不一样，因为这里进去之后就要发生改变，而全排列进去之后不改变
	dfs(startx,starty,0);
	cout<<emm<<endl;
	return 0;
 } 
