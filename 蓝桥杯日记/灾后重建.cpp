#include<bits/stdc++.h>
using namespace std;
int n,m,q,x,y,p,l,r,k,c,maxn,h;
struct edge {
    int from,to,cost;
} e[200010];
bool cmp(const edge& e1,const edge& e2) {
    return e1.cost<e2.cost;
}
int pre[50010],buf[50010];
bool vis[50010];
int find(int x) {
    return pre[x]==x?x:pre[x]=find(pre[x]);
}
bool same(int x,int y) {
    int fx=find(x);
    int fy=find(y);
    if (fx==fy) return true;
    return false;
}
void unite(int x,int y) {
    int fx=find(x);
    int fy=find(y);
    if (fx>fy) swap(fx,fy);
    pre[fy]=fx;
}
bool judge() {
    for (int i=0;i<h;i++) {
        if (vis[buf[i]]==false) return false;
    }
    return true;
}
int main()
{
    scanf ("%d%d%d",&n,&m,&q);
    for (int i=0;i<m;i++)
        scanf ("%d%d%d",&e[i].from,&e[i].to,&e[i].cost);
    sort(e,e+m,cmp);
    while (q--) {
        for (int i=1;i<=n;i++) pre[i]=i;
        scanf ("%d%d%d%d",&l,&r,&k,&c);
        maxn=-1;
        h=0;
        memset(vis,false,sizeof(vis));
        memset(buf,0,sizeof(buf));
        for (int i=l;i<=r;i++) {
            if (i%k==c) buf[h++]=i;
        }
        for (int i=0;i<m;i++) {
            edge t=e[i];
            if (!same(t.from,t.to)) {
                unite(t.from,t.to);
                if (maxn<t.cost) maxn=t.cost;
                vis[t.from]=true;
                vis[t.to]=true;
            }
            if (judge()) break;
        }
        printf ("%d\n",maxn);
    }
    return 0;
}
