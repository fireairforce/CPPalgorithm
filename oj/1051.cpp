#include<bits/stdc++.h>
int a[1000];
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   {
       int sum=0,k=0;
       int zoom=i;
       for(int j=1;j<i;j++)
       {
           if(zoom%j==0)
           {
               sum+=j;
               a[k]=j;
               k++;
           }
       }
       if(sum==i)
       {
           cout<<sum<<" its factors are ";
           for(int m=0;m<k;m++)
           {
               cout<<a[m]<<" ";
           }
           cout<<endl;
           memset(a,0,sizeof(a));
       }
       else continue;
   }
   return 0;
}
