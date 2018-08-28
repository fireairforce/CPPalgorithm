#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x;
    char gg1;
    int y;
    char gg2;
    int z;
    int book;
}q[3];
bool cmp(const emm&a1,const emm&a2)
{
    if(a1.x==a2.x)
    {
        if(a1.y==a2.y)
        {
            return a1.z<a2.z;
        }
        return a1.y<a2.y;
    }
    return a1.x<a2.x;
}
int main()
{
    q[0].book=0;
    q[1].book=1;
    for(int i=0;i<2;i++)
    {
        cin>>q[i].x>>q[i].gg1>>q[i].y>>q[i].gg2>>q[i].z;
    }
    sort(q,q+2,cmp);
    int emm1=q[1].z-q[0].z;
    if(emm1<0)
    {
        q[1].y-=1;
        emm1=q[1].z+29-q[0].z;
    }
    int emm2=q[1].y-q[0].y;
    if(emm2<0)
    {
        q[1].x-=1;
        emm2=q[1].y+17-q[0].y;
    }
    int emm3=q[1].x-q[0].x;
    if(q[1].book==0) {printf("-");}
    cout<<emm3<<"."<<emm2<<"."<<emm1<<endl;
    return 0;
}
