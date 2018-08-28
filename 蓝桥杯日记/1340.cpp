m#include<bits/stdc++.h>
using namespace std;
int pow_mod(int a,int b)
{
    int ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
            ans*=base;
            base*=base;
            b>>=1;
    }
    return ans;
}
struct code1
{
    int x;
    int y;
}a[1000];
struct code2
{
    int x;
    int y;
}b[1000];
int main()
{
    map<char,char>emm;
    emm['1']='1';
    emm['2']='2';
    emm['5']='5';
    emm['6']='9';
    emm['8']='8';
    emm['9']='6';
    emm['0']='0';
    int zoom1=0,zoom2=0,emm1=0,emm2=0,emm3=0,emm4=0;
    char s1[5],s2[5],s3[5],s4[5];
   for(int i=1002;i<=9999;i++)
   {
         int flag=0,sum=i;
         if(i%10==0) continue;
         sprintf(s1,"%d",i);
         for(int j=0;j<4;j++)
         {
             if(s1[j]=='3'||s1[j]=='4'||s1[j]=='7')
             {
                 flag=1; break;
             }
             else s1[j]=emm[s1[j]];
         }
         if(flag) continue;
         int sum1=0;
         for(int j=3;j>=0;j--)
         {
             sum1+=(s1[j]-'0')*pow_mod(10,j);
         }
         if(200<(sum-sum1)&&(sum-sum1)<300)
         {
              a[emm1++].x=sum-sum1;
              a[emm3++].y=sum;
         }
         else if(800<(sum1-sum)&&(sum1-sum)<900)
         {
              b[emm2++].x=sum1-sum;
              b[emm4++].y=sum;
         }
         else continue;
    }
      for(int i=0;i<emm2;i++)
         {
             for(int j=0;j<emm1;j++)
             {
                 if(b[i].x-a[j].x==558)
                 {
                     cout<<b[i].y<<" "<<a[j].y<<endl;
                 }
             }
         }
    return 0;
}
