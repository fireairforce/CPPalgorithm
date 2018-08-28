#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[1007];
    int b[5];
    int c[5];
    int d[1007];
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=1;i<=5;i++)
    {
        b[i]=0;
        c[i]=0;
    }
    int emm=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]%5==0&&a[i]%2==0)
       {
           c[1]=1;
           b[1]+=a[i];
       }
       else if(a[i]%5==1)
       {
           c[2]++;
           if(c[2]%2==0)
           {
               b[2]-=a[i];
           }
           else b[2]+=a[i];
       }
       else if(a[i]%5==2)
       {
           c[3]=1;
           b[3]++;
       }
       else if(a[i]%5==3)
       {
           b[4]+=a[i];
           c[4]++;
       }
       else if(a[i]%5==4)
       {
          c[5]++;
          d[emm++]=a[i];
       }
    }
    if(c[5]!=0)
    {
        b[5]=*max_element(d,d+emm);
    }
    for(int i=1;i<=5;i++)
    {
        if(c[i]==0)
        {
            cout<<"N";
        }
       else if(i==4&&c[4]!=0)
        {
            double S=(double)b[4]/c[4];
            cout<<fixed<<setprecision(1)<<S;
        }
       else
       {
           cout<<b[i];
       }
        if(i!=5)
        {
            cout<<" ";
        }
    }
    return 0;
}
