#include<bits/stdc++.h>
using namespace std;
struct code
{
    string a;
    int b;
    int c;
    int d;
    int e;
}q[107];
bool cmp(const code&a1,const code&a2)
{
    if(a1.b==a2.b)
    {
        if(a1.c==a2.c)
        {
            if(a1.d==a2.d)
            {
               return a1.e>a2.e;
            }
            return a1.d>a2.d;
        }
        return a1.c>a2.c;
    }
    return a1.b>a2.b;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].a>>q[i].b>>q[i].c>>q[i].d>>q[i].e;
    }
    sort(q+1,q+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<q[i].a<<" "<<q[i].b<<" "<<q[i].c<<" "<<q[i].d<<" "<<q[i].e<<endl;
        //printf("%s %d %d %d %d\n",q[i].a,q[i].b,q[i].c,q[i].d,q[i].e);
    }
    return 0;
}
