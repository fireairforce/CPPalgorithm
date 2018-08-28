#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int m,n;
int num;
const int maxn=1000+50;
char a[maxn][maxn];
int book[maxn][maxn];
void dfs(int x,int y)
{
    if(x<1||x>m||y<0||y>n)
    {
        return ;
    }
    if(book[i][j]>0||a[i][j]!='@')
    {
        return;
    }
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x+1,y+1);
    dfs(x-1,y+1);
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x-1,y-1);
    dfs(x+1,y+1);
}
int main()
{
    while(scanf("%d%d",&m,&n)==2&&m&&n)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
            }
        }
        num=0;
        memset(book,0,sizeof(book));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(book[i][j]==0&&a[i][j]=='@')
                {
                    dfs(i,j);
                    book[i][j]=1;

                }
            }
        }
    }
    return 0;
}
