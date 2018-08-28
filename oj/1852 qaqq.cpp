#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int f(int x)
{
    if(x==0)
    {
        return 0;
    }
    if(x%2==0)
    {
        return f(x/2);
    }
    else if(x%2!=0)
    {
        return f(x-1)+1;
    }
}
int a[maxn]={0};
int b[maxn]={0};
int c[maxn]={0};
int main()
{
     int t,n;
     scanf("%d",&t);
     while(t--)
     {
         scanf("%d",&n);
         int sum=0;
         for(int i=1;i<=n;i++)
         {
            scanf("%d",&a[i]);
            a[i]=f(a[i]);
            sum^=a[i];
         }
         int minx=0;
         int flag=0;
         for(int i=1;i<=n;i++)
         {
             if((sum^a[i])>minx)
             {
                 minx=sum^a[i];
                 flag=i;
             }
         }
         printf("%d %d\n",flag,minx);
     }
    return 0;
}
