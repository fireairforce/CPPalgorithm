#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long n;
   while(cin>>n)
   {
       int zoom=0,force=0;
   for(int i=1;i<=100;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(i*i*i-j*j*j==n)
           {
               zoom=j;
               force=i;
               break;
           }
           if(zoom!=0||force!=0)
           {
               break;
           }
       }
   }
   if(zoom==0&&force==0)
   {
       cout<<-1<<endl;
   }
   else
   {
        cout<<zoom<<" "<<force<<endl;
   }

   }

    return 0;
}
