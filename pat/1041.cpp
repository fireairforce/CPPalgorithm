#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int maxn=1e5+7;
struct code
{
   ull x;
   int y;
}q[maxn];
struct code1
{
    ull x1;
    int y1;
}a[maxn];
int main()
{
    int n,z,m,chaxun,b[maxn];
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>q[i].x>>z>>q[i].y;
        a[z].x1=q[i].x;
        a[z].y1=q[i].y;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++)
    {
        cout<<a[b[i]].x1<<" "<<a[b[i]].y1<<endl;
    }
    return 0;
}
