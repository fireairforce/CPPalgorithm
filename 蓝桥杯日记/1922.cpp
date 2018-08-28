#include<bits/stdc++.h>
using namespace std;
struct code
{
    string a;
    int b;
}q[107];
bool cmp(const code&a1,const code&a2)
{
    return a1.b>a2.b;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].a>>q[i].b;
    }
    sort(q+1,q+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<q[i].a<<" "<<q[i].b<<endl;
    }
    return 0;
}
