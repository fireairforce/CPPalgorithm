#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[107],b[107];
    int c[1007];
    memset(c,0,sizeof(c));
    while(gets(a))
    {
        for(int i=0;a[i];i++)
        {
            c[a[i]]++;
        }
        int minx=-1;
        for(int i=0;i<=1000;++i)
        {
            if(c[i]!=0)
            {
                if(i>minx)
                {
                    minx=i;
                }
            }
        }
        for(int i=0;a[i];i++)
        {
            if(a[i]==minx)
            {
                printf("%c",a[i]);
                printf("(max)");
            }
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
