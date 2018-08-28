#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cstdio>
int minx=9999999999;
int book[30][30],a[30][30];
int book2[30][30];
int emm[30];
int hah=0;
void dfs(int x,int y,int step)
{
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty,k;
    if(x==5&&y==5)
    {
        emm[hah++]=step;
        return;
    }
    for(k=0;k<=3;k++)
    {
        tx=x+next[k][0];
        ty=y+next[k][1];
        if(tx<1||tx>5||ty<1||ty>5)
        {
            continue;
        }
        if(a[tx][ty]==0&&book[tx][ty]==0)
        {
            book[tx][ty]=1;
          //  book2[tx][ty]=1;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
    }
    return;
}
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    memset(emm,0,sizeof(emm));
    memset(book,0,sizeof(book));
    memset(book2,0,sizeof(book2));
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    book[1][1]=1;
    dfs(1,1,0);
    sort(emm,emm+hah);
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(book[i][j]==1)
            {
                cout<<i-1<<" "<<j-1<<endl;
            }
        }
    }
   cout<<emm[0]<<endl;
   cout<<"("<<0<<", "<<0<<")"<<endl;
    return 0;
}
