#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum1=0,sum2=0,score[107]={0},counnt[107]={0},rightcounnt[107]={0},allright[107]={0};
    int stuop[107][107]={0},sum[107],emm=0,wa[107]={0},jl[107]={0};
    char right[107][107]={""},stu1[107][107][107]={""};
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
       cin>>score[i]>>counnt[i]>>rightcounnt[i];
       sum2+=score[i];
       for(int j=0;j<rightcounnt[i];j++)
       {
          cin>>right[i][j];
       }
    }
    char ch1,ch2;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
           cin>>ch1>>stuop[i][k];
           for(int j=0;j<stuop[i][k];j++)
           {
              cin>>stu1[i][k][j];
           }
           cin>>ch2;
           int flag=0;
           if(stuop[i][k]==rightcounnt[k])
           {
               for(int j=0;j<stuop[i][k];j++)
               {
                  if(stu1[i][k][j]!=right[k][j])
                  {
                      flag=2;
                  }
               }
               if(flag!=2) flag=1;
           }
           if(flag==1)  sum[i]+=score[k];
           else wa[k]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
        sum1+=sum[i];
    }
    if(sum1==sum2*n)
    {
        printf("Too simple\n");
    }
    else
    {
        int max1=-1,zoom=0,force=0,zoom1=0;
        for(int i=0;i<m;i++)
        {
          if(wa[i]>max1)
          {
            max1=wa[i];
          }
        }
       for(int i=0;i<m;i++)
       {
         if(wa[i]==max1)
         {
            jl[zoom1++]=i;
         }
       }
       cout<<max1<<" ";
       for(int i=0;i<zoom1;i++)
       {
          cout<<jl[i]+1;
          if(i!=zoom1-1)
          {
            cout<<" ";
          }
       }
       cout<<endl;
    }
    return 0;
}
