#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
const int maxn=100000;
struct code
{
    string a;
    char kuohao1;
    int x;
    char douhao;
    int y;
    char kuohao2;
    int c;
}q[maxn];
bool cmp(const code &mom,const code &dad)
{
    return mom.c<dad.c;
}
int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n,k;
    int bh;
    string fx;
    int bs;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>q[i].a;
            getchar();
            cin>>q[i].kuohao1;
            cin>>q[i].x;
            cin>>q[i].douhao;
            cin>>q[i].y;
            cin>>q[i].kuohao2;
            cin>>q[i].c;
        }
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            cin>>bh;
            cin>>fx;
           if(fx[0]=='s')
           {
               continue;
           }
           else
           {
               cin>>bs;
               for(int j=1;j<=n;j++)
               {
                   if(q[j].c==bh)
                   {
                       if(fx[0]=='N')
                       {
                           q[j].y+=bs;
                       }
                       else if(fx[0]=='S')
                       {
                           q[j].y-=bs;
                       }
                       else if(fx[0]=='E')
                       {
                           q[j].x+=bs;
                       }
                       else if(fx[0]=='W')
                       {
                           q[j].x-=bs;
                       }
                   }
               }
           }
        }
        sort(q+1,q+n+1,cmp);
        for(int i=1;i<=n;i++)
        {
            cout<<q[i].a<<" "<<'('<<q[i].x<<','<<q[i].y<<')'<<" ";
            if(q[i].c<10)
            {
                cout<<"00"<<q[i].c<<endl;
            }
            else if(10<=q[i].c&&q[i].c<100)
            {
                cout<<'0'<<q[i].c<<endl;
            }
            else cout<<q[i].c<<endl;
        }
        cout<<endl;
    }
    return 0;
}
