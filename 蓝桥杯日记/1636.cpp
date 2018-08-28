#include<stdio.h>
#include<string.h>
#include<math.h>
int map[3][4];
int flag[15];
int map_vis[3][4];   //�������
int s_flag[15];    //�������
int s[15];       //����ѡ����
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int sum=0,index=0;
void dfs1(int x,int y)
{                         //�ж�5�����Ƿ�����
    int sx,sy;
       for(int i=0;i<4;i++)
       {
         sx=x+dir[i][0];
         sy=y+dir[i][1];
         if(sx<0 || sx>=3 || sy<0 || sy>=4)
            continue;                         //�����ж�
         if(!s_flag[map[sx][sy]]|| map_vis[sx][sy])
           continue;
             map_vis[sx][sy]=1;
             index++;
             dfs1(sx,sy);
       }
}
void check()
{
    int x,y;
    memset(map_vis,0,sizeof(map_vis));
    memset(s_flag,0,sizeof(s_flag));
    int i;
    for(i=0;i<6;i++)
        s_flag[s[i]]=1;
    for(i=0;i<12;i++)
    {
        x=i/4;
        y=i%4;
        if(s_flag[map[x][y]])    //�ҵ���ѡ������map�����е�λ��
        {
            index=1;
            map_vis[x][y]=1;
            dfs1(x,y);
            break;
        }
    }
    if(index==5)
        sum++;
}
void dfs(int count)
{                         //�г���12�����в��ظ�ѡ5�������������
    int i;
    if(count==6)
    {
          check();
        return;
    }
    else
    {
        for(i=s[count-1]+1;i<=12;i++)
        {
            if(!flag[i])
            {
                flag[i]=1;
                s[count]=i;     //��ѡ�õ�5�����ŵ�s������
                dfs(count+1);
                flag[i]=0;
            }
        }
    }
}
int main()
{
    int i,j,k=1;
    for(i=0;i<3;i++)
        for (j=0;j<4;j++)
        map[i][j]=k++;
        dfs(1);
        printf("%d\n",sum);
    return 0;
}
