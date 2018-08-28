#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x;
    int y;
    int z;
}q[107];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d",&q[i].x,&q[i].y,&q[i].z);
    }
    int m,o;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&o);
        printf("%d %d %d \n",q[o].x,q[o].y,q[o].z);
    }
    return 0;
}
