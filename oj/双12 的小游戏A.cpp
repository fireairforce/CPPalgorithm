#include<bits/stdc++.h>
const int maxn=100086;
int c[maxn],d[maxn],junjun[maxn],zoom[maxn],cz[maxn];
int emm;
using namespace std;
int main()
{
    char s[10000];
    int len;
    int m;
    while(gets(s))
    {
       if(strlen(s)<=1&&s[0]=='0')
       {
           cout<<"0 is a palindromic number."<<endl;
       }
       else
       {
           for(emm=0;emm<10;emm++)
           {
              if(emm>0)
              {
                 int nike=0;
                 memset(s,0,sizeof(s));
               for(int hah=m;hah>=1;hah--)
              {
                s[nike]=junjun[hah]+48;
                nike++;
              }
              }
              memset(c,0,sizeof(c));
              memset(d,0,sizeof(d));
              memset(junjun,0,sizeof(junjun));
              memset(cz,0,sizeof(cz));
             len=strlen(s);
             //cout<<len<<endl;
             for(int i=0;i<len;i++)
              {
               c[len-i]=s[i]-48;
              }
              for(int i=0;i<len;i++)
              {
               d[i+1]=s[i]-48;
              }
           m=1;
          int x=0;
          while(m<=len)
          {
              junjun[m]=c[m]+d[m]+x;
              x=junjun[m]/10;
              junjun[m]%=10;
              m++;
          }
          junjun[m]=x;
          if(junjun[m]==0)
          {
              m--;
          }
          int baba=m;
          for(int i=0;i<m;i++)
          {
              cz[i]=junjun[baba];
              baba--;
          }
          int mid=m/2-1;
          int top=0;
           memset(zoom,0,sizeof(zoom));
          for(int wd=0;wd<=mid;wd++)
          {
              zoom[++top]=cz[wd];
          }
          int next;
          if(mid%2==0)
          {
              next=mid+1;
          }
          else
          {
              next=mid+2;
          }
          for(int force=next;force<=m-1;force++)
          {
              if(cz[force]!=zoom[top])
              {
                  top++;
                  break;
              }
              top--;
          }
               for(int i=1;i<=len;i++)
              {
                cout<<c[i];
              }
              cout<<" + ";
              for(int i=len;i>=1;i--)
              {
               cout<<c[i];
              }
              cout<<" = ";
              int sum=0;
              for(int zzz=m;zzz>=1;zzz--)
              {
                  cout<<junjun[zzz];
                  sum+=junjun[zzz];
              }
              cout<<endl;
           if(sum==0)
           {
            for(int zzz=m;zzz>=1;zzz--)
              {
                  cout<<junjun[zzz];
              }
              cout<<" is a palindromic number."<<endl;
              break;
           }
          else if(top==0)
          {
              for(int zzz=m;zzz>=1;zzz--)
              {
                  cout<<junjun[zzz];
              }
              cout<<" is a palindromic number."<<endl;
              break;
          }
          else if(top!=0)
          {
            continue;
          }
        }
         if(emm==10)
         {
             cout<<"Not found in 10 iterations."<<endl;
               memset(c,0,sizeof(c));
              memset(d,0,sizeof(d));
              memset(junjun,0,sizeof(junjun));
              memset(cz,0,sizeof(cz));
              len=0;
              m=1;
         }
       }
    }
    return 0;
}
