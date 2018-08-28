#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<10)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
   else if(10<=n&&n<100)
    {
        int a=n/10;
        int b=n%10;
        for(int i=1;i<=a;i++)
        {
            cout<<"S";
        }
        for(int i=1;i<=b;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    else if(100<=n&&n<1000)
    {
        int a=n/100;
        int b=(n-100*a)/10;
        int c=(n-100*a-10*b);
        for(int i=1;i<=a;i++)
        {
            cout<<"B";
        }
        for(int i=1;i<=b;i++)
        {
            cout<<"S";
        }
        for(int i=1;i<=c;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
