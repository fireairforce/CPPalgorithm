#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int b[53];
    int x;
    memset(a,0,sizeof(a));
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x);
        a[i]+=x;
    }
    int zoom=0;
    for(int i=0;i<10;i++)
    {
        while(a[i]!=0)
        {
            b[zoom++]=i;
            a[i]--;
        }
    }
    sort(b,b+zoom);
    int emm=0;
    int start;
    for(int i=0;i<zoom;i++)
    {
        if(b[i]!=0)
        {
            emm=b[i];
            start=i;
            break;
        }
    }
    printf("%d",emm);
    for(int i=0;i<zoom;i++)
    {
        if(i==start) continue;
        else printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
