#include<bits/stdc++.h>
using namespace std;
bool flag;
const int maxn=1e7+5;
bool a[maxn];
int b[maxn/2];
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
    shaixuanprime();//先提前筛选一波。
    int t;
    int k=0;
    int m;//m为测试数据。
   cin>>t;
   while(t--)
   {
       cin>>m;
        int sum=0;
       for(int i=0;i<emm;i++)//这里直接暴力搞范围内所有的的素数。
       {
            if(b[i]>=m/2+1)//这里筛到m/2+1就已经足够了（特殊情况参照4）。
                break;
            if(a[m-b[i]]==0&&m>=2*b[i])//总和减去某个素数得到的那个数在素数表里面而且m要比这个小素数的2倍大（毕竟要保证是从前面往后面筛）
            {
                sum++;
            }
       }
       cout<<"Case "<<++k<<": "<<sum<<endl;
   }
    return 0;
}
