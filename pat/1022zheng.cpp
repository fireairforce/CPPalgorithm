#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int zoom[1007];
    ll a,b;
    int d;
    scanf("%lld%lld",&a,&b);
    scanf("%d",&d);
    ll c;
    ll m;
    c=a+b;
    int emm=0;
    if(c<=d)
    {
        printf("%d\n",c);
    }
    else
    {
      do{
        m=c%d;
        zoom[emm++]=m;
        c/=d;
        }while(c<d);
    printf("%d\n",emm);
    for(int i=emm;i>=0;i--)
    {
        printf("%d",zoom[i]);
    }
    printf("\n");
    }
    return 0;
}
