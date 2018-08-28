#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    bool flag;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
           cin>>x;
            flag=0;
           if(x==4)
           {
               cout<<"trapped"<<endl;
           }
           else
           {
               for(int j=2;j<=sqrt(x);j++)
               {
               if(x%j==0)
               {
                   flag=1;
               }
               else continue;
                }
               if(flag)
               {
                   cout<<"escape"<<endl;
               }
               else cout<<"trapped"<<endl;
           }

        }
    }
    return 0;
}
