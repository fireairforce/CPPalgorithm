#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20],b[20];
    memset(b,0,sizeof(b));
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    for(int i=0;i<20;i++)
    {
        cin>>a[i];
    }
   for(int i=0;i<20;i++)
   {
       for(int j=0;j<20;j++)
       {
           if(j==i)
           {
               continue;
           }
           else
           {
            if(a[i]%a[j]==0)
            {
               b[i]=1;
            }
           }
       }
   }
   for(int i=0;i<20;i++)
   {
       if(b[i]!=0)
       {
           cout<<a[i]<<endl;
       }
   }
    return 0;
}
