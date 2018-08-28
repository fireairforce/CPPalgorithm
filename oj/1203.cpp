#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
struct code
{
    int ah;
    int am;
    int as;
    int bh;
    int bm;
    int bs;
}q[maxn];
int a[maxn];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            int mins=0;
            cin>>q[i].ah>>q[i].am>>q[i].as>>q[i].bh>>q[i].bm>>q[i].bs;
            int sum=0,counnt=0;
            int emm=q[i].as+q[i].bs;
            while(emm>=60)
            {
                emm-=60;
                sum++;
            }
            int zoom=sum+q[i].am+q[i].bm;
            while(zoom>=60)
            {
                zoom-=60;
                counnt++;
            }
            int hah=q[i].ah+q[i].bh+counnt;
            cout<<hah<<" "<<zoom<<" "<<emm<<endl;
        }
    }
    return 0;
}
