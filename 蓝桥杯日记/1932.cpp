#include<bits/stdc++.h>
using namespace std;
struct code
{
    int x;
    int y;
    int z;
}q[5];
bool cmp(const code&a1,const code&a2)
{
    if(a1.x==a2.x)
    {
        if(a1.y==a2.y)
        {
            return a1.z<a2.z;
        }
        return a1.y<a2.y;
    }
    return a1.x<a2.x;
}
int panduan(int year,int month)
{
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        return 31;
    }
    else if(month==2)
    {
        if((year%4==0&&year%100!=0)&&year%400==0)
        {
            return 29;
        }
        return 28;
    }
    else return 30;
}
int main()
{
    int a,b,c;
    char gang;
    cin>>a>>gang>>b>>gang>>c;
    if(a<60&&c>=60)
    {
        q[0].x=a+2000;
        q[0].y=b;
        q[0].z=c;
        q[1].x=c+1900;
        q[1].y=a;
        q[1].z=b;
        q[2].x=c+1900;
        q[2].y=b;
        q[2].z=a;
    }
    else if(a<60&&c<60)
    {
        q[0].x=a+2000;
        q[0].y=b;
        q[0].z=c;
        q[1].x=c+2000;
        q[1].y=a;
        q[1].z=b;
        q[2].x=c+2000;
        q[2].y=b;
        q[2].z=a;
    }
    else if(a>=60&&c>=60)
    {
        q[0].x=a+1900;
        q[0].y=b;
        q[0].z=c;
        q[1].x=c+1900;
        q[1].y=a;
        q[1].z=b;
        q[2].x=c+1900;
        q[2].y=b;
        q[2].z=a;
    }
    else if(a>=60&&c<60)
    {
        q[0].x=a+1900;
        q[0].y=b;
        q[0].z=c;
        q[1].x=c+2000;
        q[1].y=a;
        q[1].z=b;
        q[2].x=c+2000;
        q[2].y=b;
        q[2].z=a;
    }
    sort(q,q+3,cmp);
    int start=0;
    for(int i=0;i<3;i++)
    {
        if((1960<=q[i].x&&q[i].x<=2059)&&(1<=q[i].z&&q[i].z<=panduan(q[i].x,q[i].y))&&(1<=q[i].y&&q[i].y<=12))
        {
           printf("%04d",q[i].x);
           printf("-");
           printf("%02d",q[i].y);
           printf("-");
           printf("%02d\n",q[i].z);
           start=i;
           break;
        }
    }
    for(int i=start+1;i<3;i++)
    {
        if((1960<=q[i].x&&q[i].x<=2059)&&(1<=q[i].z&&q[i].z<=panduan(q[i].x,q[i].y))&&(1<=q[i].y&&q[i].y<=12))
        {
            if((q[i].x==q[i-1].x)&&(q[i].y==q[i-1].y)&&(q[i].z==q[i-1].z))
            {
                continue;
            }
            else
            {
                printf("%04d",q[i].x);
                printf("-");
                printf("%02d",q[i].y);
                printf("-");
                printf("%02d\n",q[i].z);
            }
        }
    }
    return 0;
}
