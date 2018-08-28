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
        return f(x);
    }
    else if(x%2!=0)
    {
        return f(x)+1;
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
         for(int i=1;i<=n;i++)
         {
            scanf("%d",&a[i]);
            cout<<f(a[i])<<endl;
         }
         cout<<"qaq"<<endl;
         return 0;
         int zoom=1;
         while(zoom<n)
         {
             for(int i=1;i<=n;i++)
             {
                if(zoom==i)
                {
                  continue;
                }
                c[zoom]=c[zoom]^a[i];
             }
              zoom++;
         }
         int minx=0;
         int flag=0;
         for(int i=1;i<zoom;i++)
         {
             if(c[i]>minx)
             {
                 minx=c[i];
                 flag=i;
             }
         }
         printf("%d %d\n",minx,flag);
     }
    return 0;
}
