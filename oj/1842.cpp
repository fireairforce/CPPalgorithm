#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[507]={0};
int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
            y=max(y,x);
        }
        ll sum=0;
        if(a[0]>=3)
        {
            sum+=(a[0]*(a[0]-1)*(a[0]-2))/6;
        }
        for(int i=1;i<=y;i++)
        {
            sum+=(a[i]*(a[i]-1))/2*a[0];
         }
         for (int i=1;i<=y;i++)
            {
            for (int j=i+1;j<=y;j++)
            {
                int k=(i^j);
                if (k<=j||k>y)  continue;
                sum+=a[i]*a[j]*a[k];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
