#include<iostream>
using namespace std;
int a[51][51];
int book[51][51],n,m,flag=0;
struct note
{
    int x;
    int y;
}s[100];
int top=0;
void dfs(int x,int y,int step)
{
    int i;
    int tx,ty,k;
     int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    if(x==5&&y==5)
    {
        flag=1;
        for(int i=1;i<=top;i++)
        {
            cout<<"("<<s[i].x<<","<<s[i].y<<")"<<endl;
        }
        return ;
    }
    if(x<1||x>5||y<1||y>5)
    {
        return;
    }
    if(book[tx][ty]==1)
    {
        return;
    }
    book[tx][ty]=1;
    top++;
    s[top].x=x;
    s[top].y=y;
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
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
     }
     return;
}
int main()
{
    int i,j,num=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(1,1,0);
    return 0;
}
