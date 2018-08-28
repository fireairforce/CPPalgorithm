#include<bits/stdc++.h>
#define maxn 1000+7
using namespace std;
int a[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        memset(a,0,sizeof(a));
        for(int i=1;i<=x;i++)
        {
             cin>>a[i];
        }
        sort(a+1,a+x+1);
        int sum=x;
        for(int j=1;j<=x;j++)
        {
            if(a[j]>=sum-j+1)
            {
                cout<<sum-j+1<<endl;
                break;
            }
            else if(a[1]==1&&a[x]==1)
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
