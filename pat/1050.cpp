#include<bits/stdc++.h>
using namespace std;
int a[10000],s[10000][10000]={0};
int main()
{  int n,i,j,x,y,min=9999;
   int k=0,r=0,c=0;
   cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
     sort(a,a+n,greater<int>());
   for(i=1;i<=sqrt(n+0.5);i++)
   {  if(n%i==0)
       {
          if(n/i-i<min)
          {
             min=n/i-i;
             y=i;
          }
       }//确定m和n的值；
   }
   x=n/y;
  s[0][0]=a[0];
  while(k<x*y-1) //这里注意跳出循环的范围,填充到最后的时候k=x*y-1，要想跳出循环应该k<x*y-1才能跳出;
  {    while(c+1<y&&s[r][c+1]==0)//先填第一行
        s[r][++c]=a[++k];
       while(r+1<x&&s[r+1][c]==0)//最后一列
        s[++r][c]=a[++k];
       while(c-1>=0&&s[r][c-1]==0)//最后一行
       s[r][--c]=a[++k];
       while(r-1>=0&&s[r-1][c]==0)//第一列
       s[--r][c]=a[++k];
  }//这里c填第一行时加到最大，在填最后一列时又逆序减回来,r填最后一列会加到最大，填第一列又会逆序捡回去。
  for(i=0;i<x;i++)
  {   cout<<s[i][0];
     for(j=1;j<y;j++)
       {
        cout<<" "<<s[i][j];}
        cout<<endl;
  }
  return 0;
}
