#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double max=0;
    for(int i=0;i<n;i++)
    {
        double a,b,ans;
        scanf("%lf %lf",&a,&b);
        ans=sqrt(a*a+b*b);
        max=ans>max?ans:max;
    }
    printf("%.2lf",max);
    return 0;
}
