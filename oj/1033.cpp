#include<bits/stdc++.h>
using namespace std;
vector<int>m;
int main()
{
   int a[1020];
   for(int i=0;i<=1000;++i)
   {
       a[i]=0;
   }
   int x,y;
   for(int m=1;m<=6;m++)
   {
       cin>>x;
       a[x]++;
   }
   for(int n=1;n<=8;n++)
   {
       cin>>y;
       a[y]++;
   }
   for(int j=0;j<=1000;j++)
   {
       if(a[j]>1)
       {
           cout<<j<<endl;
       }
   }
    return 0;
}
