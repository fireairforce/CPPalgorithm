#include<bits/stdc++.h>
#include<cstdio>
struct renwu
{
    int a;
    int b;
    int c;
    int d;
}q[1050];
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].a>>q[i].b>>q[i].c>>q[i].d;
        int emm1=q[i].b-q[i].c;//��һ�������ǻ�ʣ�µ�Ѫ����
        int emm2=q[i].a-q[i].d;//��һ������С��ʣ�µ�Ѫ����
        int sum=0,counnt=0;
        while(emm1>0)
        {
            emm1=emm1-q[i].c;
            sum++;
        }
        while(emm2>0)
        {
            emm2=emm2-q[i].d;
            counnt++;
        }
        if(sum>=counnt)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
