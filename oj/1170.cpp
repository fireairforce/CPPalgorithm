#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double t=0;
    for(int i=1;i<=n;i++)
    {
        t+=(double)1/i;
    }
    printf("%.6lf",t);
    return 0;
}
