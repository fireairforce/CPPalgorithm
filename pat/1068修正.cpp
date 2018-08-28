#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+7;
const int maxn1=1e6+7;
int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
ll a[maxn][maxn];
ll b[maxn1];
int main()
{
    memset(a,-1,sizeof(a));
    memset(b,0,sizeof(b));
    int m,n,t;
    memset()
    scanf("%d %d %d",&m,&n,&t);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]);
           b[a[i][j]]++;
        }
    }
    return 0;
}
