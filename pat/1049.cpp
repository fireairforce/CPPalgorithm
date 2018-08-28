#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double tmp=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%lf",&tmp);
       sum+=(tmp*(n-i)*(i+1));
    }
    printf("%.2f\n",sum);
    return 0;
}
