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
       }//ȷ��m��n��ֵ��
   }
   x=n/y;
  s[0][0]=a[0];
  while(k<x*y-1) //����ע������ѭ���ķ�Χ,��䵽����ʱ��k=x*y-1��Ҫ������ѭ��Ӧ��k<x*y-1��������;
  {    while(c+1<y&&s[r][c+1]==0)//�����һ��
        s[r][++c]=a[++k];
       while(r+1<x&&s[r+1][c]==0)//���һ��
        s[++r][c]=a[++k];
       while(c-1>=0&&s[r][c-1]==0)//���һ��
       s[r][--c]=a[++k];
       while(r-1>=0&&s[r-1][c]==0)//��һ��
       s[--r][c]=a[++k];
  }//����c���һ��ʱ�ӵ�����������һ��ʱ�����������,r�����һ�л�ӵ�������һ���ֻ�������ȥ��
  for(i=0;i<x;i++)
  {   cout<<s[i][0];
     for(j=1;j<y;j++)
       {
        cout<<" "<<s[i][j];}
        cout<<endl;
  }
  return 0;
}
