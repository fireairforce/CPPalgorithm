#include<bits/stdc++.h>
const int maxn=1e2+7;
using namespace std;
int a[maxn]={0},book[maxn]={0},sum=0;
void dfs(int step)
{
    if(a[1]+a[2]!=a[3])
    {
        return;
    }
    if(a[4]-a[5]!=a[6])
    {
        return;
    }
    if(a[7]*a[8]!=a[9])
    {
        return;
    }
    if(a[11]*a[12]!=a[10])
    {
        return;
    }
    if(step==13)
    {
        sum++;
    }
    for(int i=1;i<=13;i++)
    {
        if(book[i]==0)
        {
            a[step]=i;
            book[i]=1;
            dfs(step+1);
            book[i]=0;
        }
    }
    return;
}
int main()
{
    dfs(1);
    printf("%d\n",sum);
    return 0;
}
