#include<bits/stdc++.h>
using namespace std;
int fun1(int x)
{
    return ++x;
}
int fun2(int &x)
{
    return ++x;
}
int main()
{
    int a=0,b=0,c=0;
    c=fun1(a)+fun2(b);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
