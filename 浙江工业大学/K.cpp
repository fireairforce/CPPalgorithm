#include<bits/stdc++.h>
const int maxn=10050;
int a[maxn];
using namespace std;
int main()
{
    int x,n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
          cin>>x;
          for(int j=1;j<=x;j++)
          {
            cin>>a[j];
          }
          sort(a+1,a+x+1);

        }
    }

    return 0;
}
