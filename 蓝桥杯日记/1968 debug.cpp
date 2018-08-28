#include<bits/stdc++.h>
using namespace std;
bool flag;
const int maxn=1e8+5;
bool a[maxn];
int b[maxn/2];
int c[maxn];
int emm=0;
void shaixuanprime()//埃及筛法、
{
    memset(a,0,sizeof(a));
    a[0]=a[1]=1;
    for(int i=2;i<=maxn;++i)
    {
        if(a[i]==0)
        {
            b[emm++]=i;//先放2,然后二的倍数全GG。用数组b存这一区间的素数。
            for(int j=2*i;j<=maxn;j+=i)//2的倍数全GG
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    shaixuanprime();

    return 0;
}
