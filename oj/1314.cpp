#include<bits/stdc++.h>
#define n 3
using namespace std;
int main()
{
    char a[1007][1007];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           scanf("%c%*c",&a[i][j]);
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c",a[j][i]);
            if(j!=n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
