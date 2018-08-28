#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct node
{
    int v,next;
} e[100005];

int head[10005],vis[10005];
int n,m,x,y,num,ans;

void init(int u,int v)
{
    e[num].v=v;
    e[num].next=head[u];
    head[u]=num++;
}

void dfs(int s,int step)
{
    int i;
    if(step==2)
    {
        for(i=head[s]; i!=-1; i=e[i].next)
            ans++;
        ans--;
        return ;
    }
    for(i=head[s]; i!=-1; i=e[i].next)
    {
        if(vis[e[i].v])
            continue;
        vis[e[i].v]=1;
        dfs(e[i].v,step+1);
        vis[e[i].v]=0;
    }
}

int main()
{
    int i,j;
    memset(head,-1,sizeof(head));
    scanf("%d%d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&x,&y);
        init(x,y);
        init(y,x);
    }
    for(i=1; i<=n; i++)
    {
        memset(vis,0,sizeof(vis));//�ظ�dfs()ʱ�ǵó�ʼ�����������������Ƿ���Щë��
        vis[i]=1;//�ǵõ�һ�����ֱ�ǰ������Ҳ�����Һܾ�
        dfs(i,0);
    }
    printf("%d\n",ans);
    return 0;
}

