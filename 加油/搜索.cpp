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
		return;//�ݹ�һ��Ҫ�б߽��������ж� 
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
			book[tx][ty]=0;//��������һ��Ҫ�С� 
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
	book[startx][starty]=1;//����ͺ�ȫ�����е㲻һ������Ϊ�����ȥ֮���Ҫ�����ı䣬��ȫ���н�ȥ֮�󲻸ı�
	dfs(startx,starty,0);
	cout<<emm<<endl;
	return 0;
 } 
