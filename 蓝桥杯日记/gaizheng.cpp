#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double eps=1e-6;
ll a[107]={0};
ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    double m=1,minx=1;
    int flag=0;
    ll zoom=0,force=0;
    for(int i=1;i<n;i++)
    {
        m=(double)(a[i]/a[i-1]);
        if((m-n)>eps)
        {
            n=m;
            zoom=a[i-1];
            force=a[i];
            flag=1;
        }
        else
        {
            zoom=a[i-1];
            force=a[i];
        }
    }
    int emm=gcd(zoom,force);
    printf("%d/",zoom/emm);
    printf("%d\n",force/emm);
    return 0;
}
