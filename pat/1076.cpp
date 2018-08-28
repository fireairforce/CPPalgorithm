#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
struct code
{
   string a;
   string b;
   string c;
   string d;
}q[maxn];
int main()
{
    int n,emm2[maxn]={0},zoom=0;
    map<char,int>emm1;
    emm1['A']=1;
    emm1['B']=2;
    emm1['C']=3;
    emm1['D']=4;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       cin>>q[i].a>>q[i].b>>q[i].c>>q[i].d;
       if(q[i].a[2]=='T')
       {
          emm2[zoom++]=emm1[q[i].a[0]];
       }
       else if(q[i].b[2]=='T')
       {
          emm2[zoom++]=emm1[q[i].b[0]];
       }
       else if(q[i].c[2]=='T')
       {
           emm2[zoom++]=emm1[q[i].c[0]];
       }
       else if(q[i].d[2]=='T')
       {
           emm2[zoom++]=emm1[q[i].d[0]];
       }
    }
    for(int i=0;i<zoom;i++)
    {
        printf("%d",emm2[i]);
    }
    printf("\n");
    return 0;
}
