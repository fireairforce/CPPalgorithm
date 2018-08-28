#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,emm=0;
   char ch;
   scanf("%d",&n);
   cin>>ch;
   for(int i=1;i<=100;i++)
   {
       if((4*i-1)<=n)
       {
           emm=i;
       }
   }
   for(int i=0;i<emm/2;i++)
   {
       for(int j=0;j<i;j++)
       {
           printf(" ");
       }
       int qaq=j;
       for(int k=0;k<(emm-1)/2-qaq;k++)
       {
           printf("%c",ch);
       }
       printf("\n");
   }
   for(int i=0;i<(emm-1)/2;i++)
   {
       for(int j=(emm-1)/2;j>1;j++)
       {
           printf(" ");
       }
       for(int k=0;k<)
   }
    return 0;
}
