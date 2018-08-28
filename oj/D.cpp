#include<bits/stdc++.h>
using namespace std;
const int maxn=10086;
char a[maxn],b[maxn],m[maxn],junjun[maxn];
char s[maxn];
int c[maxn],d[maxn];
int e[maxn];
int gg[maxn];//e数组用来存结果。
int mr;
bool huiwen(char m[])
{
    int len1=strlen(m);
    int mid=len1/2-1;
    int top=0;
    int next;
    for(int i=0;i<=mid;i++)
    {
        s[++top]=m[i];
    }
    if(len1%2==0)
    {
        next=mid+1;
    }
    else
    {
        next=mid+2;
    }
    for(int i=next;i<=len1-1;i++)
    {
        if(m[i]!=s[top])
        {
            break;
        }
        top--;
    }
    if(top==0)
    {
        return true;
    }
    else return false;
}
int main()
{
    while(gets(a))
    {
        if(huiwen(a))
        {
            memset(gg,0,sizeof(gg));
            for(int i=strlen(a)-1;i>=0;i--)
            {
                gg[i]=a[i]-48;
                cout<<gg[i];
            }
            cout<<" is a palindromic numeber."<<endl;
        }
        else
        {
            for(mr=0;mr<=9;mr++)
            {
                int len=strlen(a);
                memset(c,0,sizeof(c));
                memset(d,0,sizeof(d));
                memset(e,0,sizeof(e));
                memset(b,0,sizeof(b));
              for(int i=0;i<len;i++)
              {
               c[len-i-1]=a[i]-48;//一个存加数。
              }
              for(int i=0;i<len;i++)
              {
               d[i]=a[i]-48;//存被加数。
              }
              int m=0,x=0;
              while(m<len)
              {
                 e[m]=c[m]+d[m]+x;
                 x=e[m]/10;
                 e[m]=e[m]%10;
                 m++;
              }
              e[m]=x;
             if(e[m]==0)
              {
                  m--;
              }
              int kkk=m;
              for(int i=0;i<=m;i++)
              {
                  b[kkk]=e[i]+48;
                  kkk--;
              }
              if(huiwen(b))
              {
                for(int i=0;i<len;i++)
                {
                    cout<<c[i];
                }
                  cout<<" + ";
                for(int i=len-1;i>=0;i--)
                {
                    cout<<c[i];
                }
                  cout<<" = ";
                  for(int i=m;i>=0;i--)
                  {
                      cout<<e[i];
                  }
                  cout<<endl;
                  for(int i=m;i>=0;i--)
                  {
                      cout<<e[i];
                  }
                  cout<<" is a palindromic number."<<endl;
                  break;
              }
              else
              {
                for(int i=0;i<len;i++)
                {
                    cout<<c[i];
                }
                  cout<<" + ";
                for(int i=len-1;i>=0;i--)
                {
                    cout<<c[i];
                }
                  cout<<" = ";
                  for(int i=m;i>=0;i--)
                  {
                      cout<<e[i];
                  }
                  cout<<endl;
                  memset(a,0,sizeof(a));
                  int zzz=m;
                  for(int i=0;i<=m;i++)
                  {
                      a[i]=e[zzz]+48;
                      zzz--;
                  }
              }
            }
            if(mr==10)
            {
                cout<<"Not found in 10 iterations."<<endl;
            }
        }
    }
    return 0;
}
