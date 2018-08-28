#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    set<ll>a;
    ll b;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        a.insert(b);
    }
    set<ll>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
