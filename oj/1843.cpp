#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x,y,z,e,sum;
}q[107];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&q[i].x,&q[i].y,&q[i].z,&q[i].e);
        q[i].sum=q[i].x+q[i].y+q[i].z+q[i].e;
    }
    for(int i=0;i<n;i++)
    {
        if(q[i].sum<305||q[i].x<85||q[i].y<55||q[i].z<55||q[i].e<85)
        {
            cout<<"C"<<endl;
        }
        else if(305<q[i].sum&&q[i].sum<370)
        {
            cout<<"B"<<endl;
        }
        else cout<<"A"<<endl;
    }
    return 0;
}
