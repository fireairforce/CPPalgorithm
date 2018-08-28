#include<iostream>
using namespace std;
int main()
{
    long long i,j,n,m,p,a,b,c,fm,sn,result;
    cin>>n>>m>>p;
    a=b=1;
    for(i=3;i<=m;i++)//Çófm
    {
        c=a+b;
        a=b;
        b=c;
    }
    fm=b;
    a=b=1;
    for(i=3;i<=n+2;i++)//Çósn
    {
        if(a+b>=fm)
            c=(a+b)%fm;
        else
            c=a+b;
        a=b;
        b=c;
    }
    sn=(b+fm-1)%fm;
    result=sn%p;
    cout<<result<<endl;
    return 0;
}
