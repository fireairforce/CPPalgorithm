#include<bits/stdc++.h>
using namespace std;
struct emm
{

};
int main()
{
    int n,m,tea[107]={0},sum[107]={0},stu[107][107]={0},g2[107][107]={0},cg2[107]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&tea[i]);
       for(int j=0;j<n-1;j++)
       {
           scanf("%d",&stu[i][j]);
           if(0<=stu[i][j]&&stu[i][j]<=m)
           {
               g2[i][cg2[i]++]=stu[i][j];
           }
       }
       sort(g2[i],g2[i]+cg2[i]);
       for(int j=1;j<cg2[i]-1;j++)
       {
          sum[i]+=g2[i][j];
       }
       sum[i]=((sum[i]/(cg2[i]-2))+0.5);
       if((sum[i]+tea[i])&1)
       {
           sum[i]=(sum[i]+tea[i])/2+1;
       }
       else sum[i]=(sum[i]+tea[i])/2;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",sum[i]);
    }
    return 0;
}
