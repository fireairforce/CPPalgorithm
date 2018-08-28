#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int flag[12];
int num[6];
bool ok(int n)
{
    int cnt=0;
    while(n)
    {
        if(flag[n%10])
            return false;
        num[cnt++]=n%10;
        flag[n%10]++;
        n/=10;
    }
    return true;
}
bool ok1(int n)
{
    int t=0,j;
    for(int j=0;j<6;j++)
    {
        t+=num[j]*n;
        if(flag[t%10])return false;
        t/=10;
    }
    while(t)
    {
        if(flag[t%10])
            return false;
        t/=10;
    }
    return true;
}
int main()
{
    for(int i=123456;i<=987654;i++)
    {
        memset(flag,0,sizeof(flag));
        if(!ok(i))
            continue;
        else
        {
            if(ok1(i))
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

