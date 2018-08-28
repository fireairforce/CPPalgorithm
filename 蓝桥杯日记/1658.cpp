#include<bits/stdc++.h>
using namespace std;
typedef __int64 ull;
ull n,s,m=0;
int main()
{
    cin>>n>>s;
    for(ull x=1;x<1000;x++)
    {
         m=2*x-1;
         ull sum=m;
      for(ull i=1;i<n;i++)
      {
        sum+=2*m-1;
        m=2*m-1;
      }
      if((s-sum)==x)
      {
          cout<<sum<<endl;
          cout<<x<<endl;
          break;
      }
      else continue;
    }
    return 0;
}
