#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    int x;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(x==1)
            {
                cout<<2<<endl;
            }
            else if(x>=2)
            {
                int S=((11+9*(x-1))*(x-1))/2+2;
                cout<<S<<endl;
            }
        }
    }
    return 0;
}
