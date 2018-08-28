#include<bits/stdc++.h>
#include<stdio.h>
typedef long long ll;
const ll maxn=200050;
using namespace std;
struct keti
{
    string a;
    ll x;
    ll y;
}q[maxn];
bool cmp(const keti &hah,const keti &emm)
{
    return (double)hah.x/hah.y<(double)emm.x/emm.y;
}
int main()
{
    ll T;
    ll m;
  cin>>T;
  for(int j=1;j<=T;j++)
  {
      ios::sync_with_stdio(false);
       cin>>m;
       ll k=0;
       for(int i=0;i<m;i++)
       {
           cin>>q[i].a>>q[i].x>>q[i].y;
       }
       sort(q,q+m,cmp);
       cout<<q[m-1].a<<endl;
       cin.tie(0);
  }
   return 0;
}
