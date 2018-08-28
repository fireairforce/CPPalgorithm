//用c++的输入输出会tle，但是改成C就不会了
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
struct code1//德才均具备。
{
    int a;//学号。
    int b;//得分
    int c;//才分。
}q1[maxn];
struct code2
{
    int d;
    int e;
    int f;
}q2[maxn];
struct code3
{
    int zoom1;
    int zoom2;
    int zoom3;
}q3[maxn];
struct code4
{
    int force1;
    int force2;
    int force3;
}q4[maxn];
bool cmp1(const code1&qaq,const code1&wow)
{
    if((qaq.b+qaq.c)==(wow.b+wow.c))
    {
        if(qaq.b==wow.b)
        {
            return qaq.a<wow.a;
        }
        return qaq.b>wow.b;
    }
    return (qaq.b+qaq.c)>(wow.b+wow.c);
}
bool cmp2(const code2&qaq,const code2&wow)
{
    if((qaq.e+qaq.f)==(wow.e+wow.f))
    {
        if(qaq.e==wow.e)
        {
            return qaq.d<wow.d;
        }
        return qaq.e>wow.e;
    }
    return (qaq.e+qaq.f)>(wow.e+wow.f);
}
bool cmp3(const code3&qaq,const code3&wow)
{
    if((qaq.zoom2+qaq.zoom3)==(wow.zoom2+wow.zoom3))
    {
        if(qaq.zoom2==wow.zoom2)
        {
            return qaq.zoom1<wow.zoom1;
        }
        return qaq.zoom2>wow.zoom2;
    }
    return (qaq.zoom2+qaq.zoom3)>(wow.zoom2+wow.zoom3);
}
bool cmp4(const code4&qaq,const code4&wow)
{
    if((qaq.force2+qaq.force3)==(wow.force2+wow.force3))
    {
        if(qaq.force2==wow.force2)
        {
            return qaq.force1<wow.force1;
        }
        return qaq.force2>wow.force2;
    }
    return (qaq.force2+qaq.force3)>(wow.force2+wow.force3);
}
int main()
{
    int n,l,h;//l表示及格线，而h表示优秀线。
    int a1,b1,c1;//德分是b1，才分是c1。
    int k11=0,k21=0,k31=0;
    int k12=0,k22=0,k32=0;
    int k13=0,k23=0,k33=0;
    int k14=0,k24=0,k34=0;
    scanf("%d%d%d",&n,&l,&h);
    for(int i=1;i<=n;i++)
    {
       scanf("%d%d%d",&a1,&b1,&c1);
       if(b1>=h&&c1>=h)//第一类考生。
       {
          q1[++k11].a=a1;
          q1[++k21].b=b1;
          q1[++k31].c=c1;
       }
       else if((b1>=h)&&(l<=c1&&c1<h))
       {
           q2[++k12].d=a1;
           q2[++k22].e=b1;
           q2[++k32].f=c1;
       }
       else if((l<=b1&&b1<h)&&(l<=c1&&c1<h)&&(b1>=c1))
       {
           q3[++k13].zoom1=a1;
           q3[++k23].zoom2=b1;
           q3[++k33].zoom3=c1;
       }
       else if((l<=b1&&b1<h)&&(l<=c1&&c1<h)&&(b1<c1))
       {
           q4[++k14].force1=a1;
           q4[++k24].force2=b1;
           q4[++k34].force3=c1;
       }
       else if((l<=b1&&b1<h)&&(c1>=h)&&(b1<c1))
       {
           q4[++k14].force1=a1;
           q4[++k24].force2=b1;
           q4[++k34].force3=c1;
       }
       else continue;
    }
       sort(q1+1,q1+1+k11,cmp1);
       sort(q2+1,q2+1+k12,cmp2);
       sort(q3+1,q3+1+k13,cmp3);
       sort(q4+1,q4+1+k14,cmp4);
     cout<<k11+k12+k13+k14<<endl;
       for(int i=1;i<=k11;i++)
       {
           printf("%d %d %d\n",q1[i].a,q1[i].b,q1[i].c);
       }
       for(int i=1;i<=k12;i++)
       {
           printf("%d %d %d\n",q2[i].d,q2[i].e,q2[i].f);
       }
       for(int i=1;i<=k13;i++)
       {
           printf("%d %d %d\n",q3[i].zoom1,q3[i].zoom2,q3[i].zoom3);
       }
       for(int i=1;i<=k14;i++)
       {
           printf("%d %d %d\n",q4[i].force1,q4[i].force2,q4[i].force3);
       }
    return 0;
}
