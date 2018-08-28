#include<iostream>
using namespace std;
char a[25][25],flag[25][25];
void dfs(int x,int y)
{
    if(a[x-1][y]=='.' && flag[x-1][y]==0)
    {
        sum++;
        flag[x-1][y]=1;
        DFS(x-1,y);
    }
    if(a[x][y-1]=='.' && flag[x][y-1]==0)
    {
        sum++;
        flag[x][y-1]=1;
        DFS(x,y-1);
    }
    if(a[x][y+1]=='.' && flag[x][y+1]==0)
    {
        sum++;
        flag[x][y+1]=1;
        DFS(x,y+1);
    }
    if(a[x+1][y]=='.' && flag[x+1][y]==0)
    {
        sum++;
        flag[x+1][y]=1;
        DFS(x+1,y);
    }
}
int main()
{
    int m,n;//m行n列
    int w,d;//（w,d）用来记录人开始的位置。
    while(cin>>m>>n)
    {

    for(i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=="@")
            {
                w=i;
                d=j;
            }
        }
    }
    flag[w][d]=".";
    dfs(w,d,1);
    cout<<sum<<endl;
    }
    return 0;
}
