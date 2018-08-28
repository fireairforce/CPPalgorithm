#include<bits/stdc++.h>
const int maxn=1e6+7;
typedef unsigned long long ll;
int F[maxn]={0};
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    F[1]=1,F[2]=1;
    for(int i=3;i<=n;i++)
    {
       F[i]=(F[i-1]+F[i-2])%10007;
    }
    cout<<F[n]<<endl;
    return 0;
}
//1 1 2 3 5 8.13
