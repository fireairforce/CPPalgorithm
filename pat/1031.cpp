#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   char a[100][20];
   scanf("%d",&n);
   map<int,char>emm;
   emm[0]='1';
   emm[1]='0';
   emm[2]='X';
   emm[3]='9';
   emm[4]='8';
   emm[5]='7';
   emm[6]='6';
   emm[7]='5';
   emm[8]='4';
   emm[9]='3';
   emm[10]='2';
   int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
   for(int i=1;i<=n;i++)
   {
      cin>>a[i];
   }
   int sum2=0;
   for(int i=1;i<=n;i++)
   {
       int sum1=0;
       char emm1=a[i][17];
       for(int j=0;j<17;j++)
       {
           sum1+=(a[i][j]-'0')*quan[j];
       }
       sum1=sum1%11;
       if(emm[sum1]==emm1)
       {
          sum2++;
       }
       else cout<<a[i]<<endl;
   }
   if(sum2==n) cout<<"All passed"<<endl;
    return 0;
}
