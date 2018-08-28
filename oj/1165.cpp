#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    double sum=100,emm=100;
    for(int i=1;i<n;i++)
    {
        emm/=2;
        sum+=2*emm;
    }
    printf("%.4lf\n",sum);
    return 0;
}
