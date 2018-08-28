#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
struct code
{
   string name;
   int year;
   char ganghao1;
   int month;
   char ganghao2;
   int date;
}q[maxn];
struct code2
{
    string name;
   int year;
   int month;
   int date;
}q2[maxn];
bool cmp(const code2&a1,const code2&a2)
{
    if(a1.year==a2.year)
    {
        if(a1.month==a2.month)
        {
            return a1.date<a2.date;
        }
        return a1.month<a2.month;
    }
    return a1.year<a2.year;
}
bool panduan(int x,int y,int z)
{
    if(x>2014)
    {
        return false;
    }
    else if(x==2014)
    {
        if(y>9)
        {
            return false;
        }
        else if(y==9)
        {
            if(z>6)
            {
                return false;
            }
            else return true;
        }
        else if(y==2)
        {
            if(0<z&&z<=29)
            {
                return true;
            }
            else return false;
        }
        else if(y==1||y==3||y==5||y==7||y==8)
        {
             if(1<=z&&z<=31)
             {
                 return true;
             }
             else return false;
        }
        else if(y==4||y==6)
        {
            if(1<=z&&z<=31)
            {
                return true;
            }
            else return false;
        }
        else return false;
    }
    else if(1814<x&&x<2014)
    {
        if((x%4==0&&x%100!=0)||(x%400==0))
        {
          if(y==2)
          {
             if(0<z&&z<=29)
             {
                return true;
             }
             else return false;
          }
          else if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
          {
              if(1<=z&&z<=31)
              {
                  return true;
              }
              else return false;
          }
          else if(y==4||y==6||y==9||y==11)
          {
              if(1<=z&&z<=30)
              {
                  return true;
              }
              else return false;
          }
          else return false;
        }
        else
        {
          if(y==2)
          {
            if(0<z&&z<=28)
            {
                return true;
            }
            else return false;
          }
          else if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
          {
              if(1<=z&&z<=31)
              {
                  return true;
              }
              else return false;
          }
          else if(y==4||y==6||y==9||y==11)
          {
              if(1<=z&&z<=30)
              {
                  return true;
              }
              else return false;
          }
          else return false;
       }
    }
    else if(x==1814)
    {
        if(y>9)
        {
            return true;
        }
        else if(y==9)
        {
            if(6<=z&&z<=30)
            {
                return true;
            }
            else return false;
        }
        else if(y==10||y==12)
        {
            if(0<z&&z<=31)
            {
                return true;
            }
            else return false;
        }
        else if(y==11)
        {
            if(0<z&&z<=30)
            {
                return true;
            }
            else return false;
        }
        else return false;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,sum1=0,sum2=0,sum3=0,force=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       cin>>q[i].name>>q[i].year>>q[i].ganghao1>>q[i].month>>q[i].ganghao2>>q[i].date;
       if(panduan(q[i].year,q[i].month,q[i].date))
       {
           q2[++force].name=q[i].name;
           q2[++sum1].year=q[i].year;
           q2[++sum2].month=q[i].month;
           q2[++sum3].date=q[i].date;
       }
    }
    sort(q2+1,q2+sum1+1,cmp);
    if(sum1==0)
    {
        cout<<0<<endl;
    }
    else cout<<sum1<<" "<<q2[1].name<<" "<<q2[sum1].name;
    return 0;
}
