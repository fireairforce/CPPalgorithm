#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1007];
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        double sum1=0;
        for(int i=1;i<n-1;i++)
        {
            sum1+=a[i];
        }
        sum1=sum1/(n-2);
        printf("%.2f\n",sum1);
    }
    return 0;
}
