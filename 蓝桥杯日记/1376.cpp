#include<bits/stdc++.h>
using namespace std;
int main()
{
   for(int i=1;i<=50;i++)
   {
       for(int j=1;j<=i;j++)
       {
           if(i*j==(i+j)*6&&(i-j)<=8)
           {
             printf("%d %d\n",i,j);
           }
       }
   }
    return 0;
}
