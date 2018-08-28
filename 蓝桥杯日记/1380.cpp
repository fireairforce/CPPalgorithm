#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[57]={0},book[57]={0};
    scanf("%d",&n);
    int cnt;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            a[i]=abs(a[i]);
            book[i]=1;
        }
    }
    if(!book[0])
    {
        cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[0]&&book[i])
            {
                cnt++;
            }
            if(cnt)
            {
                for(int i=1;i<n;i++)
                {
                    if(a[i]<a[0]&&!book[i])
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    else
    {
        cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[0]&&!book[i])
            {
                cnt++;
            }
        }
        if(cnt)
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]>a[0]&&book[i])
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d\n",cnt+1);
    return 0;
}
