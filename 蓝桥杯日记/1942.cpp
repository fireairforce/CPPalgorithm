#include<bits/stdc++.h>
using namespace std;
int dir[4][2]={{1,0},{0,-1},{0,1},{-1,0}};//DLRU
int book[100][100]={0};
char s1[100][100];
int n,m;
struct emm
{
    int x;
    int y;
    int t;
    string s;
}node,tmp;
queue<emm>q;
char c[6]="DLUR";
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>s1[i][j];
        }
    }
    node.x=1;
    node.y=1;
    node.t=0;
    node.s="";
    q.push(node);
    while(!q.empty())
    {
        tmp=q.front();
        if(tmp.x==n&&tmp.y==m)
        {
            break;
        }
        q.pop();
        for(int i=0;i<4;i++)
        {
            int a=tmp.x+dir[i][0];
            int b=tmp.y+dir[i][1];
        }
    }
    return 0;
}
