#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a>b?b:a;
}
struct square
{
    int x1;
    int y1;
    int x2;
    int y2;
}q[5];
int main()
{
    //int x1,x2,y1,y2;
    while(cin>>q[0].x1>>q[0].y1>>q[0].x2>>q[0].y2>>q[1].x1>>q[1].y1>>q[1].x2>>q[1].y2)
    {
        int nike[100],adi[1000];
       //S1代表第一个的面积。S2代表第二个的面积。
       int emm=0;
       for(int i=0;i<2;i++)
       {
           nike[emm]=q[i].x1;
           adi[emm]=q[i].y1;
           emm++;
       }
        for(int j=0;j<2;j++)
       {
           nike[emm]=q[j].x2;
           adi[emm]=q[j].y2;
           emm++;
       }
       sort(nike,nike+4);
       sort(adi,adi+4);
     if(min(q[0].x1,q[0].x2)>=max(q[1].x1,q[1].x2)||min(q[1].x1,q[1].x2)>=max(q[0].x1,q[0].x2))
     {
        cout<<0<<endl;
     }
     else if(min(q[0].y1,q[0].y2)>=max(q[1].y1,q[1].y2)||min(q[1].y1,q[1].y2)>=max(q[0].y1,q[0].y2))
     {
         cout<<0<<endl;
     }
     else
     {
         //对所以x的值进行排序，选出里面中间的x值，选出里面中间的y值。绝对值的乘积即为最小面积。
         int zoom=abs(nike[2]-nike[1]);
         int force=abs(adi[2]-adi[1]);
         cout<<zoom*force<<endl;
     }
     memset(nike,0,sizeof(0));
     memset(adi,0,sizeof(0));
    }
    return 0;
}
