//奇偶情况要特别讨论一下。
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char emm;
    scanf("%d %c",&n,&emm);
    int N=n/2;
    if(n&1) {N++;}
    for(int i=0;i<n;i++)
    {
        printf("%c",emm);
    }
    printf("\n");
   for(int i=0;i<N-2;i++)
   {
      for(int j=0;j<n;j++)
      {
          if(j==0) printf("%c",emm);
          else if(j==(n-1)) printf("%c\n",emm);
          else if((j!=(n-1))&&(j!=0)) printf(" ");
      }
   }
   for(int i=0;i<n;i++)
   {
       printf("%c",emm);
   }
   //printf("\n");
    return 0;
}
