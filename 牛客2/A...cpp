/*
这个题目利用了组合数学的公式，求一个数的阶乘的位数。
zoom=(x*log(x) - x + 0.5*log(2*x*PI))/log(8);
*/
#include<bits/stdc++.h>
#define PI 3.1415926535
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int x;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            printf("1\n");
        }
        else
        {
            int zoom=(x*log(x) - x + 0.5*log(2*x*PI))/log(8);
            printf("%d\n",zoom+1);
        }
    }
    return 0;
}
