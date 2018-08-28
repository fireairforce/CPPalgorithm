#include<bits/stdc++.h>
using namespace std;
struct zoom
{
    string b1;
}q[1007];
struct zoom2
{
    string b2;
}q2[1007];
bool cmp(const zoom2&a1,const zoom2&a2)
{
    return a1.b2<a2.b2;
}
bool panduan(string a)
{
    int len1=a.size();
    int left=0,right=len1-1;
    while(left<right)
    {
        if(a[left]==a[right])
        {
            left++;
            right--;
        }
        else break;
    }
    if(left>=right)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int zoom=0;
    for(int i=1;i<=n;i++)
    {
        cin>>q[i].b1;
        if(panduan(q[i].b1))
        {
            q2[zoom++].b2=q[i].b1;
        }
    }
    sort(q2,q2+zoom,cmp);
    for(int i=0;i<zoom;i++)
    {
        cout<<q2[i].b2<<endl;
    }
    return 0;
}
