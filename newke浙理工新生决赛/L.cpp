#include<bits/stdc++.h>
const int n=10000;
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r1,r2,r3;
       cin>>r1>>r2>>r3;
     double S=0;
     S=(r1+r3+sqrt((r1+r3)*(r1+r3)+(r1+r3)*r2*4))/2;
     cout<<fixed<<setprecision(2)<<S<<endl;
    }
    return 0;
}
