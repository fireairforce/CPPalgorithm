#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
struct code
{
    string name;
    string xuehao;
    int grade;
}q[maxn];
bool cmp(const code&qaq,const code&wow)
{
    return qaq.grade<wow.grade;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].name>>q[i].xuehao>>q[i].grade;
    }
    sort(q+1,q+n+1,cmp);
    cout<<q[n].name<<" "<<q[n].xuehao<<endl;
    cout<<q[1].name<<" "<<q[1].xuehao<<endl;
    return 0;
}
