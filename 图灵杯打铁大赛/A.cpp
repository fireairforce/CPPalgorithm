#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            cout<<fixed<<setprecision(6)<<a/b<<endl;
        }
    }
    return 0;
}
