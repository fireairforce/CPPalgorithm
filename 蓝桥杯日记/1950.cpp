#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int flag=0;
    scanf("%d",&n);
    int a[5];
    for(int i=0;i<=3000;i++)
    {
        for(int j=i;j<=3000;j++)
        {
            for(int k=j;k<=3000;k++)
            {
                int q=sqrt(n-i*i-j*j-k*k);
                if(i*i+j*j+k*k+q*q==n)
                {
                    a[0]=i;a[1]=j;a[2]=k;a[3]=q;
                    sort(a,a+4);
                    printf("%d",a[0]);
                    for(int i=1;i<4;i++)
                    {
                        printf(" %d",a[i]);
                    }
                    printf("\n");
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) break;
    }
    return 0;
}
