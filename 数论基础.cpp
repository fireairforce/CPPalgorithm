#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int x,y;
    int n;
    while(cin>>x>>y)
    {
        cin>>n;
        int a=x,b=y;//a第一项，b第二项。
        int m=0;
        int c=0;
        if(n>=2)
        {
            for(int i=3;i<=n;i++)
            {
            c=b-a;
            a=b;
            b=c;
            }
            if(b>0)
            {
                 m=b%(1000000007);
            }
            else m=b+(1000000007);
        }
        else if(n==1)
        {
            if(a>0)
            {
                m=a%1000000007;
            }
             else
             {
                m=a+1000000007;
             }
        }
        else if(n==2)
        {
            if(b>0)
            {
                m=b%1000000007;
            }
            else
            {
                m=b+1000000007;
            }
        }
        cout<<b<<endl;
      cout<<m<<endl;
    }
    return 0;
}
