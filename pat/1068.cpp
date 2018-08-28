#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+7;
int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
int main()
{
    int m,n,t;
    ll a[maxn][maxn]={-1};
    ll b[maxn*maxn]={0};
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
