#include<bits/stdc++.h>
const int maxn=10000+7;
using namespace std;
struct emm
{
    int n;
    int x;
    int y;
}q[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>q[i].n>>q[i].x>>q[i].y;
        if(3*q[i].y<q[i].x)
        {
             int sum=0;
            int emm=q[i].n-q[i].x;
            if(emm>=0)
            {
            sum=sum+3;
            }
            int hah=0;
            if(emm>=q[i].y)
            {
            hah=emm/q[i].y;
            }
            cout<<sum+hah<<endl;
        }
        else
        {
            int sum=0;
            int emm=q[i].n-q[i].x;
            int fuck=emm;
            while(emm>=q[i].x)
            {
                emm-=q[i].x;
                sum+=3;
            }
            int hah=0;
            if(emm>=q[i].y)
            {
                hah=emm/q[i].y;
            }
            if(fuck>=0)
            {
                cout<<sum+3+hah<<endl;
            }
            else cout<<sum+hah<<endl;
        }
    }
    return 0;
}
