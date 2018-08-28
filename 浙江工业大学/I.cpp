#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
queue<int>q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%4!=0)
            {
                if(1<=i&&i<=10)
                {
                    cout<<i<<endl;
                }
               else if(10<i&&i<100&&i/10!=4&&i%10!=4)
               {
                   cout<<i<<endl;
               }
               else if(100<=i&&i<1000)
               {
                   int a=i/100;
                   int b=(i-a*100)/10;
                   int c=i-a*100-b*10;
                   if(a!=4&&b!=4&&c!=4)
                   {
                        cout<<i<<endl;
                   }
               }
               else if(1000<=i&&i<10000)
               {
                   int a=i/1000;
                   int b=(i-a*1000)/100;
                   int c=(i-1000*a-100*b)/10;
                   int d=i-1000*a-100*b-10*c;
                   if(a!=4&&b!=4&&c!=4&&d!=4)
                   {
                       cout<<i<<endl;
                   }
               }
               else if(10000<=i&&i<1000000)
               {
                   int a=i/10000;
                   int b=(i-10000*a)/1000;
                   int c=(i-10000*a-1000*b)/100;
                   int d=(i-10000*a-1000*b-100*c)/10;
                   int e=i-10000*a-1000*b-100*c-10*d;
                   if(a!=4&&b!=4&&c!=4&&d!=4&&e!=4)
                   {
                       cout<<i<<endl;
                   }
               }

            }
        }

    return 0;
}
