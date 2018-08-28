#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char emm;
    int zoom=0;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d %c",&n,&emm);
    for(int i=1;i<=100;i++)
    {
        if((2*i*i-1)<=n&&n<(2*(i+1)*(i+1)-1))
        {
            zoom=i;
            break;
        }
    }
    int hah=n-2*zoom*zoom+1;
    for(int i=zoom;i>=1;i--)
    {
        for(int j=1;j<=zoom-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%c",emm);
        }
        printf("\n");
    }
    for(int i=2;i<zoom+1;i++)
    {
        for(int j=0;j<zoom-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%c",emm);
        }
         printf("\n");
    }
    printf("%d",hah);
    return 0;
}
