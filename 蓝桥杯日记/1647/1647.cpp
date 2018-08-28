#include<iostream>
#include<cstdio>
using namespace std;
int nex[4][2]={{1,0},{0,1},{-1,0},{0,-1}},sum=0;
char a[107][107];
int book[107][107]={0};
struct node
{
    int x;
    int y;
    int step;
}que[10007];
int main()
{
   //freopen("in.txt","r",stdin);
    int n;
    int startx,starty;
    int p,q;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='A')
            {
                startx=i;
                starty=j;
            }
        }
    }
    int head,tail;
    head=tail=1;
    que[tail].x=startx;
    que[tail].y=starty;
    que[tail].step=0;
    tail++;
    book[startx][starty]=1;
    int flag=0;
    int tx,ty;
    while(head<tail)
    {
        for(int k=0;k<4;k++)
        {
            tx=que[head].x+nex[k][0];
            ty=que[head].y+nex[k][1];
            if(tx<0||tx>n-1||ty<0||ty>n-1)
            {
                continue;
            }
            if(a[que[head].x][que[head].y]=='A')
            {
                if(!book[tx][ty])
                {
                    book[tx][ty]=1;
                    que[tail].x=tx;
                    que[tail].y=ty;
                    que[tail].step=que[head].step+1;
                    tail++;
                }
            }
           else if(a[que[head].x][que[head].y]=='+')
           {
               if(!book[tx][ty]&&(a[tx][ty]=='-'||a[tx][ty]=='B'))
               {
                   book[tx][ty]=1;
                   que[tail].x=tx;
                   que[tail].y=ty;
                   que[tail].step=que[head].step+1;
                   tail++;
               }
           }
            else if(a[que[head].x][que[head].y]=='-')
            {
               if(!book[tx][ty]&&(a[tx][ty]=='+'||a[tx][ty]=='B'))
               {
                   book[tx][ty]=1;
                   que[tail].x=tx;
                   que[tail].y=ty;
                   que[tail].step=que[head].step+1;
                   tail++;
               }
           }
            if(a[tx][ty]=='B')
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
        head++;
    }
    if(flag)
    {
      printf("%d\n",que[tail-1].step);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
