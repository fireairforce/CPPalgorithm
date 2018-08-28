#include<bits/stdc++.h>
using namespace std;
int sum=0;
int a[15]={-1};
int book[15]={0};
void dfs(int x)
{
    if(a[1]+a[2]!=a[3]&&x>=3)
    {
        return;
    }
    if(a[4]-a[5]!=a[6]&&x>=6)
    {
        return;
    }
    if(a[7]*a[8]!=a[9]&&x>=9)
    {
        return;
    }
    if(a[10]/a[11]==a[12]&&x>=12)
    {
        sum++;
        return;
    }
    for(int i=1;i<=13;i++)
    {
       if(!book[i])
       {
           a[x]=i;
           book[i]=1;
           dfs(x+1);
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
