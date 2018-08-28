#include<bits/stdc++.h>
using namespace std;
char a[12][12];
int book[15][15];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int sum=0;
int main()
{
    freopen("in.txt","r",stdin);
    for(int i=0;i<10;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            memset(book,0,sizeof(book));
            int x=i;
            int y=j;
            while(1)
            {
                if(book[x][y])
                {
                    break;
                }
                if(x<0||x>9||y<0||y>9)
                {
                    sum++;
                    break;
                }
                book[x][y]=1;
                if(a[x][y]=='U')
                {
                    x--;
                }
                else if(a[x][y]=='D')
                {
                    x++;
                }
                else if(a[x][y]=='R')
                {
                    y++;
                }
                else if(a[x][y]=='L')
                {
                    y--;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
