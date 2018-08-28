#include<bits/stdc++.h>
#include<cstdio>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)//构建一个图形框。emmm。
{
    COORD pos;
    pos.X=x-1;
    pos.Y=y-1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
    int i,j;
    char ver='*';
    char long ='*';
    int width,height,x,y;//(x,y)控制文本框的的起始位置。
    cin>>width>>height>>x>>y;
    gotoxy(x,y);
    for(i=0;i<=width+1;i++)
    {
        cout<<ver;
    }
    gotoxy(x,y+height+1);
    for(i=0;i<=width+1;i++)
    {
        cout<<log;
    }
    gotoxy(x,y);
    for(i=0;i<height;i++)
    {
        gotoxy(x,y+i+1);
        cout<<ver;
    }
    for(i=0;i<height;i++)
    {
        gotoxy(x+width+1,y+i+1);
        cout<<ver;
    }
    return 0;
}
