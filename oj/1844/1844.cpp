#include<bits/stdc++.h>
using namespace std;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int b[107][107]={0};
int book[107][107]={0};
char a[107][107]={""};
int num;
void dfs(int x,int y,int color)
{
   int k,tx,ty;
   b[x][y]=color;
   for(k=0;k<4;k++)
   {
       tx=x+dir[k][0];
       ty=y+dir[k][1];
       if(tx<0||tx>=12||ty<0||ty>=12)
       {
           continue;
       }
       if(a[tx][ty]=='_'&&book[tx][ty]==0)
       {
          book[tx][ty]=1;
          dfs(tx,ty,color);
       }
   }
   return ;
}
int main()
{
   //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int n;
    scanf("%d",&n);
    while(n--)
    {
       num=0;
       memset(book,0,sizeof(book));
       memset(b,0,sizeof(b));
       for(int i=0;i<12;i++)
       {
           for(int j=0;j<12;j++)
           {
               a[i][j]='_';
           }
       }
       for(int i=1;i<=10;i++)
       {
           for(int j=1;j<=10;j++)
           {
             cin>>a[i][j];
           }
       }
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
           if(a[i][j]=='_'&&book[i][j]==0)
           {
               num--;
               book[i][j]=1;
               dfs(i,j,num);
           }
        }
    }
    int qaq=-num;
    if(qaq==1)
    {
        cout<<1<<endl;
    }
    else if(qaq==2)
    {
        cout<<0<<endl;
    }
    else if(qaq==3)
    {
        cout<<8<<endl;
    }
    }
    return 0;
}
