#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    int n,a[17];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ull sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(j==i) continue;
           sum+=(10*a[i]+a[j]);
        }
    }
    cout<<sum<<endl;
    return 0;
}
