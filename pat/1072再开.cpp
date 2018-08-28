#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
const int maxn1=1e4+7;
struct node
{
  string name;
  int k;
  int flag;
}q[maxn];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    int qaq;
    int emm[maxn1]={0},stu[1007][17]={0};
    memset(stu,0,sizeof(stu));
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        cin>>qaq;
        emm[qaq]++;
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        bool force=0;
        cin>>q[i].name>>q[i].k;
        q[i].flag=0;
        for(int j=0;j<q[i].k;j++)
        {
            cin>>stu[i][j];
            if(emm[stu[i][j]])
            {
                sum1++;
                force=1;
            }
        }
        if(force==1)
        {
           q[i].flag=1;
           sum2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(q[i].flag)
        {
            cout<<q[i].name<<":";
            for(int j=0;j<q[i].k;j++)
            {
                if(emm[stu[i][j]])
                {
                    printf(" %04d",stu[i][j]);
                }
            }
            cout<<endl;
        }
    }
    cout<<sum2<<" "<<sum1<<endl;
    return 0;
}
