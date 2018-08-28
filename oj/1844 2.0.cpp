#include<bits/stdc++.h>
using namespace std;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int b[107][107]={0};
int book[107][107]={0};
char a[107][107]={""};
int num,sum;
void dfs(int x,int y,int color)
{
   int k,tx,ty;
   b[x][y]=color;
   for(k=0;k<4;k++)
   {
       tx=x+dir[k][0];
       ty=y+dir[k][1];
       if(tx<1||tx>10||ty<1||ty>10)
       {
           continue;
       }
       if(a[tx][ty]=='_'&&b[tx][ty]==0)
       {
           sum++;
          book[tx][ty]=1;
          dfs(tx,ty,color);
       }
   }
   return;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
       for(int i=1;i<=10;i++)
       {
           for(int j=1;j<=10;j++)
           {
             scanf("%c",&a[i][j]);
           }
       }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
           if(a[i][j]=='_')
           {
               num--;
               book[i][j]=1;
               dfs(i,j,num);
           }
        }
    }
     for(int i=1;i<=10;i++)
     {
         for(int j=1;j<=10;j++)
         {
             printf("%d ",b[i][j]);
         }
         printf("\n");
     }
    }
    return 0;
}
