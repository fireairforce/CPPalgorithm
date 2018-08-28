#include<bits/stdc++.h>
using namespace std ;
const int maxn=1000000;
struct student
{
    int x;
    int y;
}q[maxn];
bool cmp(const student &hah,const student &emm)
{
    return hah.x<emm.x;
}
int main()
{
   int n,m;
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>q[i].x>>q[i].y;
   }
   int zoom,force;
   int emmm=n;
   for(int j=0;j<m;j++)
   {
       cin>>zoom>>force;
       q[emmm].x=zoom;
       q[emmm].y=force;
       emmm++;
   }
   sort(q,q+n+m,cmp);
   for(int i=0;i<m+n;i++)
   {
       cout<<q[i].x<<" "<<q[i].y<<endl;
   }
    return 0;
}
