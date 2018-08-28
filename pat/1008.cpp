//对于m>n的情况取模运算就行了。
#include<bits/stdc++.h>
const int maxn=1e4+7;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[maxn];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-m%n;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-m%n;i++)
    {
        cout<<a[i];
        if(i!=n-m%n-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
