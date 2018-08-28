#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
bool panduan(int m,int n)
{
    int cnt1=0,cnt2=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    while(n!=0)
    {
        a[cnt1++]=n%10;
        b[n%10]++;
        if(b[n%10]>=2) return false;
        n/=10;
    }
    cnt2=cnt1;
    while(m!=0)
    {
        if(b[m%10]>=1)  return false;
        a[cnt2++]=m%10;
        b[m%10]++;
        m/=10;
    }
    if(cnt1==4)
    {
        for(int i=cnt1;i<cnt2;i++)
        {
            if(a[i]==0)
            {
                return false;
            }
        }
        for(int i=0;i<cnt1;i++)
        {
            if(a[i]==0)
            {
                return false;
            }
        }
    }
    if(cnt2==8) return false;
    return true;
}
int main()
{
    int n,flag=0,m;
    scanf("%d",&n);
    for(int i=1000;i<99999;i++)
    {
        m=i*n;
        if(m>1e5)
        {
            break;
        }
        else if(panduan(m,i))
        {
            printf("%05d/%05d=%d\n",m,i,n);
        }
    }
    return 0;
}
