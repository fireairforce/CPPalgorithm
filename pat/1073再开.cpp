#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x;//每道题满分值。
    int y;//选项个数。
    int z;//正确选项个数。
}q[107];
int main()
{
    int n,m,stus[1007][107]={0};
    char rg[107][7],ch,stuop[1007][107][7];
    double score[1007]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&q[i].x,&q[i].y,&q[i].z);
        for(int j=0;j<q[i].z;j++)
        {
            scanf("%c",&rg[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           scanf("%c %d",&ch,&stus[i][j]);
           for(int k=0;k<stus[i][j];k++)
           {
               scanf("%c",&stuop[i][j][k]);
           }
           scanf("%c",&ch);
        }
    }
    return 0;
}
