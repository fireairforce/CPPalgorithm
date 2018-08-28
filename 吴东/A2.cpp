#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   while(scanf("%d",&n)!=EOF)
   {
       int zoom=0,force=0;
   for(int i=1;i<=1000;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(i*i*i-j*j*j==n)
           {
               zoom=j;
               force=i;
               break;
           }
       }
       if(zoom!=0||force!=0)
        {
               break;
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
    cin.tie(0);
   }

    return 0;
}
