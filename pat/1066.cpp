#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
struct code
{
    int x;
}q[maxn][maxn];
int main()
{
    int m,n,A,B,th;
    scanf("%d%d%d%d%d",&n,&m,&A,&B,&th);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>q[i][j].x;
            if(A<=q[i][j].x&&q[i][j].x<=B)
            {
                q[i][j].x=th;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%03d",q[i][j].x);
            if(j!=m) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
