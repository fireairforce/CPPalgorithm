#include<bits/stdc++.h>
using namespace std;
struct codeen
{
    double a;
    double b;
    double c;
}q[1007];
bool cmp(const codeen&zoom,codeen&wow)
{
    return zoom.c<wow.c;
}
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&q[i].a);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&q[i].b);
        q[i].c=q[i].b/q[i].a;
    }
    sort(q+1,q+n+1,cmp);
    int emm=d;
    double sum=0;
    for(int i=n;i>=1;i--)
    {
        if(q[i].a>=emm)
        {
           sum=sum+(q[i].c*emm);
           break;
        }
        else if(q[i].a<emm)
        {
            emm=emm-q[i].a;
            sum=sum+q[i].b;
        }
    }
    printf("%.2f\n",sum);
    return 0;
}
