#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[1000];
    while(cin>>t)
    {
        for(int j=1;j<=t;j++)
        {
            for(int i=1;i<=3;++i)
        {
            cin>>a[i];
        }
        sort(a+1,a+4);
        for(int i=3;i>=1;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
        memset(a,0,sizeof(a));
        }

    }
    return 0;
}
