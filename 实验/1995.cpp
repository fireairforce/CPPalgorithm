#include<bits/stdc++.h>
using namespace std;
int qaq(int n,int m)
{
    double temp;
    if(n<m-n)
    {
        return qaq(m,m-n);
    }
    for(int i=0;i<m-n;i++)
    {
        temp*=n+i+1;
        temp/=i+1;
    }
    return (int)temp;
}
int main()
{
   int n,m,p;
   scanf("%d %d %d",&n,&m,&p);
   cout<<qaq(n,m)%p<<endl;
    return 0;
}
