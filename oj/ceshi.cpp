#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a[107]={0};
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("2\n");
        }
        else
        {
          a[1]=3;
          for(int i=2;i<=n+1;i++)
          {
            a[i]=2*a[i-1]-1;
          }
          printf("%d\n",a[n]);
        }
    }
    return 0;
}
