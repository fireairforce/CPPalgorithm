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
    sort(a,a+n);
    ll c=gcd(a[0],a[1]);
    printf("%d/",zoom/emm);
    printf("%d\n",force/emm);
    return 0;
}
