//这题有点屌。还没解开。
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
struct emm
{
    char a[maxn];
}q[4];
struct emm1
{
    int b[5];
}q1[maxn];
struct emm2
{
    int c[maxn];
}q2[maxn];
int main()
{
    int k;
    for(int i=0;i<3;i++)
    {
        scanf("%s",q[i].a);
        int zoom=0;
        for(int j=0;q[i].a[j];j++)
        {
            if(q[i].a[j]=='[')
            {
                q2[i].c[zoom++]=j;
            }
        }
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&q1[i].b[j]);
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<5;j++)
        {

        }
    }
    return 0;
}
