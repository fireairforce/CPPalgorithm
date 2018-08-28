#include<bits/stdc++.h>
using namespace std;
struct emm
{
    string a;
    string b;
    int x,y,z;
}q[1007];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       cin>>q[i].a>>q[i].b>>q[i].x>>q[i].y>>q[i].z;
    }
    for(int i=0;i<n;i++)
    {
        cout<<q[i].a<<","<<q[i].b<<","<<q[i].x<<","<<q[i].y<<","<<q[i].z<<endl;
    }
    return 0;
}
