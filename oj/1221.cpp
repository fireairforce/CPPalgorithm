#include<bits/stdc++.h>
using namespace std;
const int maxn=100000;
char a1[maxn],b1[maxn];
int a[maxn],b[maxn],c[maxn];
bool huiwen(char a[])
{
    int tail=strlen(a)-1;
    int head=0;
    while(head<=tail)
    {
        if(a[head]==a[tail])
        {
            head++;
            tail--;
        }
        else break;
    }
    if(head>tail)
    {
        return true;
    }
    else return false;
}
int main()
{
     int n;
     cin>>n;
      getchar();
     while(n--)
     {
         int sum=0;
         memset(a1,0,sizeof(a1));
         gets(a1);//a1表示输入的那个数。
        while(huiwen(a1)!=1)
        {
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            memset(c,0,sizeof(c));
            int len=strlen(a1);
            //cout<<len<<endl;
           for(int i=0;i<len;i++)
           {
             a[len-i-1]=a1[i]-48;//一个存加数。
           }
           for(int i=0;i<len;i++)
           {
             b[i]=a1[i]-48;//一个存被加数。
           }
           int m=0,x=0;
           while(m<len)
           {
             c[m]=a[m]+b[m]+x;
             x=c[m]/10;
             c[m]=c[m]%10;
             m++;
           }
           c[m]=x;
           if(!c[m])
           {
             m--;
            }
            for(int i=0;i<m+1;i++)
            {
             a1[m-i]=c[i]+48;
            }
            sum++;
            if(sum>8)
            {
                cout<<0<<endl;
                break;
            }
            else continue;
        }
        if(sum<8)
        {
            cout<<sum<<endl;
        }
     }
    return 0;
}
