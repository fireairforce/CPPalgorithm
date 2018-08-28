#include<bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
int main()
{
    unsigned long long n;//表示输入的原来的人数。
    while(cin>>n)
    {
        if(1<=n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
          if(n%2!=0)
          {
              a[1]=(1/n-1/2*(n-1))*1000;
              for(int j=1;j<=(n-1)/2;j++)
              {
                  a[j+1]=(a[j]+1/n-1/(n-1))*1000;
              }
              int S=0;
              for(int i=1;i<=(n-1)/2;i++)
              {
                  S+=2*a[i];
              }
             cout<<S<<endl;
          }
          else if(n%2==0)
          {

          }
        }
    }
    return 0;
}
