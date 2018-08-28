#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
struct node
{
    string nm;
    int height;
    friend bool operator<(const node a,const node b)
    {
        if(a.height==b.height)
        {
            return a.nm>b.nm;
        }
        return a.height<b.height;
    }
}q[maxn];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int emm1=n/k;
    int emm2=n-emm1*k;

    for(int i=0;i<n;i++)
    {
        cin>>q[i].nm>>q[i].height;

    }
    sort(q,q+n);
    string ans="";
    for(int i=0;i<k;i++)
    {
        int beg=i*emm1;
        int en=i*emm1+emm1;
        if(i*emm1+2*emm1>n)
        {
            en=n;
        }
        string line=q[en-1].nm;
        for(int j=en-2;j>=beg;j++)
        {
            if(j%2==en%2)
            {
                line=q[j].nm+" "+line;
            }
            else line=line+" "+q[j].nm;
        }
        ans=line+"\n"+ans;
    }
    cout<<ans;
    return 0;
}
