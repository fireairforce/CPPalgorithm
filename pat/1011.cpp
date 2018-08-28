#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        cout<<"Case #"<<i<<": ";
       a+b>c?cout<<"true"<<endl:cout<<"false"<<endl;
    }
    return 0;
}
