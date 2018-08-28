#include <bits/stdc++.h>
using namespace std;
const int maxn=10000;
struct student
{
    char xuehao;
    string name;
    int x;
    int y;
    int z;
}q[maxn];
bool cmp(const student &emm,const student &hah)
{
    return (emm.x+emm.y+emm.z)<(hah.x+hah.y+hah.z);
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    int pj1=0,pj2=0,pj3=0;
    for(int i=0;i<n;i++)
    {
        cin>>q[i].xuehao>>q[i].name>>q[i].x>>q[i].y>>q[i].z;
        pj1+=q[i].x;
        pj2+=q[i].y;
        pj3+=q[i].z;
    }
    cout<<pj1/n<<" "<<pj2/n<<" "<<pj3/n<<endl;
    sort(q,q+n,cmp);
    cout<<q[n-1].xuehao<<" "<<q[n-1].name<<" "<<q[n-1].x<<" "<<q[n-1].y<<" "<<q[n-1].z<<endl;
    return 0;
}
