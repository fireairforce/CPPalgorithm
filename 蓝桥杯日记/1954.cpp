#include<iostream>
#include<cstdio>
using namespace std;
int a[10][10]={0};
int book[10][10]={0};
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int ans=0;
void dfs(int x,int y)
{
    if(x==0||y==0||x==6||y==6)
    {
        ans++;
        return ;
    }
    for(int i=0;i<4;i++)
    {
        int tx=x+next[i][0];
        int ty=y+next[i][1];
        int x2=6-tx;
        int y2=6-ty;
        if(tx>=0&&ty>=0&&tx<=6&&ty<=6)
        {
            if(!book[tx][ty])
            {
                book[tx][ty]=book[x2][y2]=1;
                dfs(tx,ty);
                book[tx][ty]=book[x2][y2]=0;
            }
        }
    }
}
int main()
{
    book[3][3]=1;
    dfs(3,3);
    printf("%d\n",ans/4);
    return 0;
}
