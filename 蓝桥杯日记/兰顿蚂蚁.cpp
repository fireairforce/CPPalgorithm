#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x;
    int y;
}que[1007];
int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char s;
    int m,n,x,y,k,step=0;//step¼ÆÊý
    char a[107][107];
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cin>>a[i][j];
        }
    }
    scanf("%d%d",&x,&y);
    scanf("%c",&s);
    scanf("%d",&k);
    if(s=='U')
    {
       a[x-1][y]
    }
    else if(s=='R')
    {
       a[x][y+1]
    }
    else if(s=='L')
    {
       a[x][y-1]
    }
    else
    {
       a[x+1][y]
    }
    return 0;
}
