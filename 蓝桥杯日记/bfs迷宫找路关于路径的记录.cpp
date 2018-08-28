#include<bits/stdc++.h>
using namespace std;//DLRU
int dir[4][2]={{1,0},{0,-1},{0,1},{-1,0}};
struct emm
{
    int x;
    int y;
    int t;
    string s;
}node,tmp;
int book[507][507]={0};
char s1[507][507]="";
char c[6]="DLRU";
queue<emm>q;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
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
            int a=tmp.x+dir[k][0];
            int b=tmp.y+dir[k][1];
            if(a<1||a>n||b<1||b>m||book[a][b]||s1[a][b]=='1')
            {
                continue;
            }
            book[a][b]=1;
            node.x=a;
            node.y=b;
            node.t=tmp.t+1;
            node.s=tmp.s+c[i];
            q.push(node);
        }
    }
    cout<<tmp.t<<endl;
    cout<<tmp.s<<endl;
    return 0;
}
