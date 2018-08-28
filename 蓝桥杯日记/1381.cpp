#include<bits/stdc++.h>
using namespace std;
int a[107][107]={0};
int book[107][107]={0};
int sum=0;
int dir[2][2]={{1,0},{0,1}};
int n,m,k;
void dfs(int x,int y,int step)
{
    if(x==n-1&&y==m-1)
    {
       sum++;
       return;
    }
    for(int i=0;i<2;i++)
    {
        int tx=x+dir[i][0];
        int ty=y+dir[i][1];
        if(tx<0||ty<0||tx>n-1||ty>m-1)
        {
            continue;
        }
        if(book[tx][ty]==0)
        {
            book[tx][ty]=1;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
    }
    return;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>a[i][j];
        }
    }
    book[0][0]=1;
    dfs(0,0,0);
    printf("%d\n",sum);
    return 0;
}
