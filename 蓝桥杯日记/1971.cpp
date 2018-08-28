#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int a[107];
}q[107];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cin>>q[i].a[j];
        }
       sort(q[i].a+1,q[i].a+i+1);
    }
    int sum=0;
   for(int i=1;i<=n;i++)
   {
          sum+=q[i].a[i];
   }
   cout<<sum<<endl;
    return 0;
}
