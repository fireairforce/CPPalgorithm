#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
struct qaq
{
    string a;
    double b;
    double c;
}q[maxn];
int main()
{
    int n;
    double d;
    scanf("%d%lf",&n,&d);
    for(int i=0;i<n;i++)
    {
       cin>>q[i].a>>q[i].b>>q[i].c;
    }
    for(int i=0;i<n;i++)
    {
        if(((q[i].b*q[i].b)/4+(q[i].c*q[i].c)/4)>=((d*d)/4))
        {
           // cout<<((q[i].b*q[i].b)/4+(q[i].c*q[i].c)/4)<<" "<<(d*d)/4<<endl;
            cout<<q[i].a<<endl;
        }
    }
    return 0;
}
