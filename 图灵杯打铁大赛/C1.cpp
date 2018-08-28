#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn]={0},b[maxn]={0},c[maxn]={0},d[maxn]={0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       b[a[i]]++;
    }
    int sum=0;
    for(int i=0;i<maxn;i++)
    {
        if(b[i]) sum++;
    }
    int emm1=0;
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
        if(c[a[i]]==b[a[i]])
        {
           d[emm1++]=a[i];
        }
    }
    cout<<sum<<endl;
    cout<<d[0];
    for(int i=1;i<emm1;i++)
    {
          cout<<" "<<d[i];
    }
    cout<<endl;
    return 0;
}
