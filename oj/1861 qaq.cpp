#include<bits/stdc++.h>
using namespace std;
int dir[4][2]= {{-1,0},{1,0},{0,1},{0,-1}};
char s1[1007][1007];
int book[1007][1007]= {0};
int emm[200]= {0};
int n,m;
void dfs(int x,int y,char color)
{
    s1[x][y]=color;
    for(int k=0; k<4; k++)
    {
        int tx=x+dir[k][0];
        int ty=y+dir[k][1];
        if(tx<0||tx>n-1||ty<0||ty>m-1)
        {
            continue;
        }
        if(s1[tx][ty]=='@'&&book[tx][ty]==0)
        {
            book[tx][ty]=1;
            dfs(tx,ty,color);
        }
    }
}
int main()
{
    char num='A'-1;
    while(cin>>n>>m,n,m)
    {
        if(n==0&&m==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>s1[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s1[i][j]=='@')
                {
                    num++;
                    book[i][j]=1;
                    dfs(i,j,num);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s1[i][j]!='*')
                {
                    emm[s1[i][j]]++;
                }
            }
        }
        int minx=-1;
        for(int i=0; i<200; i++)
        {
            if(emm[i]>minx)
            {
                minx=emm[i];
            }
        }
        printf("%d\n",minx);
    }
    return 0;
}
