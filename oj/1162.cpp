#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,m;
    scanf("%d",&n);
    for(int i=1;i<10000;i++)
    {
       sum+=i*i*i;
       if(sum>n)
       {
           m=i-1;
           break;
       }
    }
    printf("%d\n",m);
    return 0;
}
