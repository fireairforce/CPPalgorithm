#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,qaq[1000007]={0};
    int zoom=0;
    for(int i=3;i<=n;i++)
    {
        a+=b;
        b=a-b;
        qaq[++zoom]=a%10007;
    }
    printf("%d\n",qaq[zoom]);
    return 0;
}
//1 1 2 3 5 8.13
